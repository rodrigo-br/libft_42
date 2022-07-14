/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:28:11 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/08 15:23:53 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_sharp(t_str *str, t_flags *flags, int *count)
{
	if (!(str->size == 1 && str->s[0] == '0')
		&& !(flags->spcf == 'p' && ft_strnstr(str->s, "(nil)", str->size)))
	{
		str->temp = ft_strjoin("0x", str->s);
		free(str->s);
		str->s = ft_strdup(str->temp);
		free(str->temp);
		if (flags->spcf == 'X')
			str->s = ft_strtoupper(str->s);
		str->size += 2;
		*count += 2;
	}
	else
		flags->null = TRUE;
}

static void	handle_plus(t_str *str, t_flags *flags, int *count)
{
	str->temp = ft_strjoin("+", str->s);
	free(str->s);
	str->s = ft_strdup(str->temp);
	free(str->temp);
	*count += 1;
	str->size += 1;
	flags->bool_space = FALSE;
}

static void	handle_width(t_str *str, t_flags *flags, int *count)
{
	int	index;

	index = 0;
	*count += flags->width_value;
	while (flags->width_value > index)
	{
		str->temp = ft_strjoin(" ", str->s);
		free(str->s);
		str->s = ft_strdup(str->temp);
		free(str->temp);
		index++;
		str->size += 1;
	}
}

void	check_flags(t_str *str, t_flags flags, int *count)
{
	if (flags.bool_plus && (flags.spcf == 'p'
			|| flags.spcf == 'd' || flags.spcf == 'i')
		&& !ft_strchr(str->s, '-'))
		handle_plus(str, &flags, count);
	if (((flags.spcf == 'x' || flags.spcf == 'X') && flags.bool_hash)
		|| flags.spcf == 'p')
		handle_sharp(str, &flags, count);
	if (flags.bool_dot && flags.spcf != 'c')
		handle_dot(str, &flags, count);
	flags.width_value -= str->size;
	if (flags.width_value > 0 && !flags.bool_minus)
		handle_width(str, &flags, count);
	if (flags.bool_zero && !flags.bool_minus && flags.width_value > 0
		&& flags.spcf != 's' && flags.spcf != 'c' && !flags.bool_dot)
		handle_zero(str, &flags);
	handle_minus_n_spac(str, &flags, count);
	if (flags.spcf != 's' && flags.spcf != 'p' && flags.null
		&& flags.bool_dot && flags.precision_value < 1)
		str->s[0] = ' ';
	if (flags.bool_zero && flags.bool_dot && flags.null
		&& flags.width_value == 1 && flags.precision_value == 1)
		str->s[0] = '0';
}

//precisão > tamanho no ponteiro
