/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 00:20:33 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/01 00:32:14 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else 
	{
		while (--n && *s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
	}	
	return (*(unsigned char *)s1 - *(unsigned char *)s2);	
}