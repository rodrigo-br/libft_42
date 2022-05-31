/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:13:07 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/31 20:55:55 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c == -1)
		return (-1);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else if (c < 0)
	{
		c = (unsigned char)c;
		return ((int)c);
	}
	else
		return (c);
}
