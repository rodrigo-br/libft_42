/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:30:46 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/04 19:08:06 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str	handle_char(va_list args, int *count, t_flags *flags)
{
	t_str	c;
	char	temp[2];

	temp[0] = va_arg(args, int);
	temp[1] = 0;
	if (temp[0])
		c.s = ft_strdup(temp);
	else
	{
		c.s = (char *)malloc(sizeof(char) * 1);
		c.s[0] = '\0';
		flags->null = TRUE;
	}
	c.size = 1;
	*count += c.size;
	return (c);
}
