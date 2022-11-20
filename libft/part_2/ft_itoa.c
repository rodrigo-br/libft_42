/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 06:37:32 by ralves-b          #+#    #+#             */
/*   Updated: 2022/11/20 11:30:06 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_rev_str(char *s);
static char	*ft_malloc_size(int number);

char	*ft_itoa(int n)
{
	char	*str;
	int		index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	index = 1;
	str = ft_malloc_size(n);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		str[1] = n / 1 % 10 + '0';
		index++;
	}
	else
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

static char	*ft_malloc_size(int number)
{
	char	*s;
	int		counter;

	counter = (number < 0);
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

	index = (s[0] == '-');
	len = ft_strlen(s) - 1;
	while (index < len)
	{
		s[index] = s[index] ^ s[len];
		s[len] = s[index] ^ s[len];
		s[index] = s[index] ^ s[len];
		index++;
		len--;
	}
	return (s);
}
