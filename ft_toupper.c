/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:55:37 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/31 20:55:18 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c == -1)
		return (-1);
	else if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c < 0)
	{
		c = (unsigned char)c;
		return ((int)c);
	}
	else
		return (c);
}
