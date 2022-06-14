/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:21:40 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/04 01:05:13 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_find_counter(char const *s1, char const *set, size_t *counter);
static void	ft_find_len(char const *s1, char const *set, long long int *len);

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*new_str;
	long long int	len;
	size_t			counter;

	counter = 0;
	if (!ft_strlen(set))
		return (ft_strdup(s1));
	if (!ft_strlen(s1))
		return (ft_strdup(""));
	ft_find_counter(s1, set, &counter);
	len = ft_strlen(s1);
	ft_find_len(s1, set, &len);
	if ((size_t)len < counter)
		return (ft_strdup(""));
	new_str = ft_substr(s1, counter, len - counter);
	return (new_str);
}

static void	ft_find_counter(char const *s1, char const *set, size_t *counter)
{
	int	index;

	index = 0;
	while (set[index])
	{
		while (set[index] == s1[*counter])
		{
			*counter = *counter + 1;
			index = -1;
		}
		index++;
	}
}

static void	ft_find_len(char const *s1, char const *set, long long int *len)
{
	int	index;

	index = 0;
	while (set[index])
	{
		while (set[index] == s1[*len - 1] && *len)
		{
			*len = *len - 1;
			index = -1;
		}
		index++;
	}
}
