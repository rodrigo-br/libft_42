/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:57:57 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/10 17:51:33 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n && *aux_s1 == *aux_s2)
	{
		aux_s1++;
		aux_s2++;
	}
	return (*(unsigned char *)aux_s1 - *(unsigned char *)aux_s2);
}
