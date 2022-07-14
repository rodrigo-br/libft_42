/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_minus_n_spac.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:30:17 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/07 09:02:01 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_space(t_str *str, t_flags *flags, int *count)
{
	if (!(flags->bool_minus && flags->width_value > str->size))
	{
		str->temp = ft_strjoin(" ", str->s);
		free(str->s);
		str->s = ft_strdup(str->temp);
		free(str->temp);
	}
	if (!flags->bool_minus)
	{
		str->size += 1;
		*count += 1;
	}
}

static void	handle_minus_with_c(t_str *str, t_flags *flags, int *count)
{
	int	index;

	index = 0;
	*count += flags->width_value;
	str->size = 0;
	write(1, str->s, 1);
	while (flags->width_value > index)
	{
		write(1, " ", 1);
		index++;
	}
}

void	handle_minus_n_spac(t_str *str, t_flags *flags, int *count)
{
	int	index;

	if (flags->bool_minus && flags->width_value > 0 && flags->spcf != 'c')
	{
		index = 0;
		*count += flags->width_value;
		while (flags->width_value > index)
		{
			str->temp = ft_strjoin(str->s, " ");
			free(str->s);
			str->s = ft_strdup(str->temp);
			free(str->temp);
			index++;
			str->size += 1;
		}
	}
	if (flags->bool_space && (flags->spcf == 'p'
			|| flags->spcf == 'd' || flags->spcf == 'i')
		&& !ft_strchr(str->s, '-') && !ft_strchr(str->s, 'n')
		&& flags->spcf != 'c')
		handle_space(str, flags, count);
	if (flags->bool_minus && flags->width_value > 0 && flags->spcf == 'c')
		handle_minus_with_c(str, flags, count);
}
