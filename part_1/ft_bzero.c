/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:02:51 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/02 01:53:18 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	char	*aux_dest;

	aux_dest = (char *)dest;
	while (n > 0)
	{
		*aux_dest = 0;
		aux_dest++;
		n--;
	}
}
