/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:38:45 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/01 00:04:36 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;

	aux_dest = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	if (!dest || !src)
		return (dest);
	if (ft_strlen(src) <= ft_strlen(dest))
	{
		while (n--)
		{
			*aux_dest = *aux_src;
			aux_dest++;
			aux_src++;
		}
	}
	else
	{
		while (n--)
			(aux_dest)[n] = (aux_src)[n];
	}
	return (dest);
}
