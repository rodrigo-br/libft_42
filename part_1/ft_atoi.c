/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:10:33 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/01 19:52:52 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	result;

	result = 0;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == ' '))
		nptr++;
	signal = ((ft_isdigit(*nptr) || *nptr == '+') - (*nptr == '-'));
	nptr += (*nptr == '-' || *nptr == '+');
	while (ft_isdigit(*nptr))
		result = result * 10 + (*nptr++ - '0');
	return (result * signal);
}
