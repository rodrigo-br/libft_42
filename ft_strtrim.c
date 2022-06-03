/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:21:40 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/03 20:32:11 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			index;
	char			*new_str;
	long long int	len;
	size_t			counter;

	counter = 0;
	index = 0;
	while (set[index])
	{
		while(set[index] == s1[counter])
		{
			counter++;
			index = -1;
		}
		index++;
	}
	index = 0;
	len = ft_strlen(s1);
	while (set[index])
	{
		while(set[index] == s1[len - 1] && len)
		{
			len--;
			index = -1;
		}
		index++;
	}
	if (!set)
		return ((char *)s1);
	new_str = (char *)malloc((len - counter) * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	new_str = ft_substr(s1, counter, len - counter);
	return (new_str);
}
