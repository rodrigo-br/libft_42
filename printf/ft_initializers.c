/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:38:34 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/07 22:10:09 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_turn_false(t_flags *flags)
{
	flags->bool_space = FALSE;
	flags->bool_zero = FALSE;
	flags->bool_hash = FALSE;
	flags->bool_dot = FALSE;
	flags->bool_minus = FALSE;
	flags->bool_plus = FALSE;
	flags->bool_end = FALSE;
	flags->null = FALSE;
	flags->width_value = 0;
	flags->precision_value = -1;
}

t_flags	ft_init_flags(const char *format_parsed)
{
	t_flags	flags;
	t_bool	width_bool;
	int		index;

	ft_turn_false(&flags);
	width_bool = FALSE;
	index = 0;
	while (ft_isformat(format_parsed[index], &width_bool, format_parsed))
	{
		if (format_parsed[index] == ' ')
			flags.bool_space = TRUE;
		if (format_parsed[index] == '0' && !width_bool)
			flags.bool_zero = TRUE;
		if (format_parsed[index] == '#')
			flags.bool_hash = TRUE;
		if (format_parsed[index] == '.')
			flags.bool_dot = TRUE;
		if (format_parsed[index] == '-')
			flags.bool_minus = TRUE;
		if (format_parsed[index] == '+')
			flags.bool_plus = TRUE;
		index++;
	}
	flags.spcf = format_parsed[index];
	return (flags);
}
