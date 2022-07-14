/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitohex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:25:42 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/04 22:09:56 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_count_hex_size(unsigned long int nb)
{
	size_t	counter;

	counter = 1;
	while (nb >= 16)
	{
		nb /= 16;
		counter++;
	}
	return (counter);
}

char	*ft_uitohex(unsigned long int nb)
{
	const char	*hexmap = "0123456789abcdef";
	char		*new_str;
	size_t		size_hex;
	char		*free_ret;

	size_hex = ft_count_hex_size(nb);
	new_str = (char *)malloc(sizeof(char) * (size_hex + 1));
	new_str[size_hex] = '\0';
	while (size_hex--)
	{
		new_str[size_hex] = hexmap[nb % 16];
		nb /= 16;
	}
	free_ret = ft_strdup(new_str);
	free(new_str);
	return (free_ret);
}
