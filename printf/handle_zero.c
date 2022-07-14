/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:16:54 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/07 07:28:21 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_0x(t_str *str, t_flags *flags)
{
	str->s[1] = 'x';
	str->s[flags->width_value + 1] = '0';
	if (flags->spcf == 'X')
		str->s[1] = 'X';
}

static void	handle_signals(t_str *str, t_flags *flags)
{
	str->s[0] = '-';
	if (ft_strchr(str->s, '+'))
		str->s[0] = '+';
	str->s[flags->width_value] = '0';
}

void	handle_zero(t_str *str, t_flags *flags)
{
	int	index;

	index = 0;
	while (flags->width_value > index)
	{
		str->s[index] = '0';
		index++;
	}
	if (((flags->spcf == 'x' || flags->spcf == 'X') && flags->bool_hash
			&& !flags->null) || (flags->spcf == 'p' && !flags->null))
		handle_0x(str, flags);
	if ((flags->spcf == 'd' || flags->spcf == 'i') && (ft_strchr(str->s, '-')
			|| ft_strchr(str->s, '+')))
		handle_signals(str, flags);
}
