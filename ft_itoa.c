/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 06:37:32 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/05 06:37:33 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		save_n;
	int		counter;
	char	*katchau;
	int		save_counter;

	save_n = n;
	counter = 1;
	while (n / 10 != 0)
	{
		counter++;
		n /= 10;
	}
	save_counter = 0;
	katchau = (char *)malloc(sizeof(char) * (counter) + 1);
	if (!katchau)
		return (NULL);
	if (n < 0)
	{
		katchau[0] = '-';
		katchau[1] = save_n % 10 + '0';
		save_counter++;
	}
	else
		katchau[0] = save_n % 10 + '0';
	while (save_counter <= counter)
	{
		save_n = save_n / 10;
		katchau[save_counter] = save_n % 10 + '0';
		save_counter++;
	}

	return (katchau);
}
