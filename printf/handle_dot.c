/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 06:54:53 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/07 22:40:26 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_numerals_no_signals(t_str *str, t_flags *flags, int *count)
{
	if (flags->bool_hash && (flags->spcf == 'X' || flags->spcf == 'x'))
		flags->precision_value += 2;
	while (flags->precision_value > str->size)
	{
		str->temp = ft_strjoin("0", str->s);
		free(str->s);
		str->s = ft_strdup(str->temp);
		free(str->temp);
		*count += 1;
		str->size += 1;
	}
	if (flags->bool_hash && (flags->spcf == 'X' || flags->spcf == 'x'))
	{
		str->s[1] = flags->spcf;
		if (flags->spcf == 'p')
			str->s[1] = 'x';
		str->s[flags->precision_value - 2] = '0';
	}
}

static void	handle_numerals_with_signals(t_str *str, t_flags *flags, int *count)
{
	if (flags->precision_value >= str->size)
	{
		while (flags->precision_value >= str->size)
		{
			str->temp = ft_strjoin("-0", &str->s[1]);
			if (ft_strchr(str->s, '+'))
				str->temp[0] = '+';
			free(str->s);
			str->s = ft_strdup(str->temp);
			free(str->temp);
			*count += 1;
			str->size += 1;
		}
	}
}

static void	handle_valid_strings(t_str *str, t_flags *flags, int *count)
{
	if (flags->precision_value >= 1)
	{
		str->temp = ft_substr(str->s, 0, flags->precision_value);
		free(str->s);
		str->s = ft_strdup(str->temp);
		free(str->temp);
		*count -= str->size - flags->precision_value;
		str->size = flags->precision_value;
	}
	else
	{
		free(str->s);
		str->s = ft_strdup("");
		*count -= str->size;
		str->size = 0;
	}
}

static void	handle_null_strings(t_str *str, t_flags *flags, int *count)
{
	{
		if (flags->precision_value < 6)
		{
			*count -= str->size;
			str->size = 0;
		}
		else
		{
			str->size = 0;
			write(1, "(null)", 6);
		}
	}
}

// The middle 'if' check for numerals nulls exceptions
void	handle_dot(t_str *str, t_flags *flags, int *count)
{
	if (flags->spcf != 's' && !ft_strchr(str->s, '-')
		&& !ft_strchr(str->s, '+'))
		handle_numerals_no_signals(str, flags, count);
	else if (flags->spcf != 's' && (ft_strchr(str->s, '-')
			|| ft_strchr(str->s, '+')))
		handle_numerals_with_signals(str, flags, count);
	if (flags->spcf != 's' && flags->spcf != 'c' && flags->spcf != 'p'
		&& flags->null && flags->precision_value < 1)
	{
		*count -= 1;
		str->size = 0;
	}
	if (flags->spcf == 's' && flags->precision_value < str->size)
	{
		if (!flags->null)
			handle_valid_strings(str, flags, count);
		else
			handle_null_strings(str, flags, count);
	}
}
