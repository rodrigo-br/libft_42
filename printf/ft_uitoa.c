/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:33:18 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/04 21:38:29 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_rev_str(char *s);
static char	*ft_malloc_size(unsigned int number);

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		index;

	index = 1;
	str = ft_malloc_size(n);
	str[0] = n / 1 % 10 + '0';
	while (n / 10 != 0)
	{
		str[index] = n / 10 % 10 + '0';
		n = n / 10;
		index++;
	}
	str[index] = '\0';
	return (ft_rev_str(str));
}

static char	*ft_malloc_size(unsigned int number)
{
	char	*s;
	int		counter;

	counter = 0;
	while (number / 10 != 0)
	{
		counter++;
		number = number / 10;
	}
	s = (char *)malloc(sizeof(char) + (counter + 1));
	return (s);
}

static char	*ft_rev_str(char *s)
{
	int		index;
	int		len;
	char	aux;

	index = 0;
	len = ft_strlen(s) - 1;
	while (index < len)
	{
		aux = s[index];
		s[index] = s[len];
		s[len] = aux;
		index++;
		len--;
	}
	return (s);
}
