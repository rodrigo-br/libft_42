/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:03:51 by ralves-b          #+#    #+#             */
/*   Updated: 2022/05/31 17:46:31 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*aux_s;

	aux_s = (unsigned char *)s;
	while (n--)
	{
		*aux_s = (unsigned char)c;
		aux_s++;
	}
	return (s);
}
