/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:26:01 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/07 04:36:18 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str	handle_unsigned(va_list args, int *count, t_flags *flags)
{
	t_str	n;

	n.s = ft_uitoa(va_arg(args, int));
	n.size = ft_strlen(n.s);
	*count += n.size;
	if (n.size == 1 && n.s[0] == '0')
		flags->null = TRUE;
	return (n);
}
