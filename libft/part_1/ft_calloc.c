/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 01:06:29 by ralves-b          #+#    #+#             */
/*   Updated: 2022/11/20 00:01:38 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		target_size;
	void	*result;

	target_size = nmemb * size;
	if (target_size != 0 && target_size / nmemb != size)
		return (NULL);
	result = malloc(target_size);
	ft_bzero(result, target_size);
	return (result);
}
