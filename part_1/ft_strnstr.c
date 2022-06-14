/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:12:05 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/02 21:28:18 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	index;

	index = 0;
	len_little = ft_strlen(little);
	if (!len_little)
		return ((char *)big);
	while (big[index] && len_little <= len--)
	{
		if (big[index] == little[0])
		{
			if (!ft_strncmp(&big[index], little, len_little))
				return ((char *)&big[index]);
		}
		index++;
	}
	return (NULL);
}
