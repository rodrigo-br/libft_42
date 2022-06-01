/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:12:05 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/01 03:32:29 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		len_little;

	if (!little)
		return ((char *)big);
	len_little = ft_strlen(little);
	while (len-- >= len_little && *big)
	{
		
		if (*little == *big)
		{
			if (!ft_strncmp(little, big, len_little) && len > len_little)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
