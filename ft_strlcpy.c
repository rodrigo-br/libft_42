/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:25:16 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/31 22:46:28 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// conserta essa bagaça, menó
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	index;
	size_t	test_ptr;
	int		test_boolean;

	test_boolean = 1;
	test_ptr = 0;
	if ((long int)size <= 0)
		return (ft_strlen(src));
	while (test_ptr < size - 1 && test_boolean == 1)
	{
		if ((int *)&src[test_ptr] == (int *)&dst[0])
		{
			test_boolean = 0;
			break ;
		}
		test_ptr++;
	}
	index = -1;
	if (ft_strlen(src) < 1)
		len_src = 0;
	else if (test_boolean == 0)
		len_src = size + (ft_strlen(src) - ft_strlen(dst) - 1);
	else
		len_src = (ft_strlen(src));
	while (++index < size - 1 && src[index])
		dst[index] = src[index];
	dst[index] = '\0';
	return (len_src);
}
