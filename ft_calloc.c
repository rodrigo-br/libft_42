/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:06:29 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/02 02:51:00 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	over_handling;
	over_handling = nmemb * size;
	if (nmemb != 0 && over_handling / nmemb != size)
		return (NULL);
	void	*katchau;
	if (nmemb == 0 || size == 0)
		return (NULL);
	katchau = malloc(nmemb * size);
	ft_memset(katchau, 0, (nmemb * size));
	return (katchau);
}
