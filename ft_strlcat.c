/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:39:11 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/02 20:09:57 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	index_aux;
	size_t	result;

	index = 0;
	index_aux = 0;
	result = ft_strlen(dst) + ft_strlen(src);
	while (dst[index])
		index++;
	while (src[index_aux] && index + 1 < size)
	{
		dst[index] = src[index_aux];
		index++;
		index_aux++;
	}
	dst[index] = '\0';
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	return (result);
}
