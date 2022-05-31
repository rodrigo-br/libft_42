/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:39:11 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/29 02:09:46 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	result;
	size_t	lenght;
	size_t	index;

	lenght = 0;
	index = 0;
	if ((long int)size <= 0)
		return (ft_strlen(src));
	else if (ft_strlen(dst) > size)
		return (size + ft_strlen(src));
	else
		result = (ft_strlen(dst) + ft_strlen(src));
	while (lenght < (size - 1) && dst[lenght] != '\0')
		lenght++;
	while (lenght < (size - 1) && src[index])
	{
		dst[lenght] = src[index];
		lenght++;
		index++;
	}
	if (lenght < size)
		dst[lenght] = '\0';
	return (result);
}
