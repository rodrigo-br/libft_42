/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:43:56 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/31 20:56:01 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;

	while (*s)
	{
		if (*s == (char)c)
			pointer = (char *)s;
		s++;
	}
	if (*s == (char)c)
	{
		pointer = (char *)s;
		return (pointer);
	}
	else if (*pointer == (char)c)
		return (pointer);
	else
		return (NULL);
}
