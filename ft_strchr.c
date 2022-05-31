/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:26:40 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/31 20:56:10 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	while (*s != (char)c && *s)
		s++;
	if (*s == (char)c)
	{	
		pointer = (char *)s;
		return (pointer);
	}
	else
		return (NULL);
}
