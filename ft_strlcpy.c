/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:25:16 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/03 16:28:00 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Despite size_t being an unsigned long int, if i assign -1 to it,
the code will ignore the line 27 to 30 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (index + 1 < size && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	if (size > 0)
		dst[index] = '\0';
	else if (size == 0)
		dst[ft_strlen(dst)] = '\0';
	return (ft_strlen(src));
}
