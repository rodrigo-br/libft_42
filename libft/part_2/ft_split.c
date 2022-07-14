/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:18:30 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/14 18:05:50 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_count_str(char const *str, char c);
static char		**ft_check_free_all(char **array_of_strs, int index);
static size_t	ft_foward_index(char const *str, char c, size_t *i);

char	**ft_split(char const *s, char c)
{
	char	**array_strs;
	size_t	s_index;
	size_t	save_index;
	size_t	aos_i;
	size_t	test;

	aos_i = 0;
	s_index = 0;
	if (!s)
		return (NULL);
	test = ft_count_str(s, c) + 1;
	array_strs = (char **)malloc((test) * sizeof(*array_strs));
	if (!array_strs)
		return (NULL);
	while (aos_i + 1 < test)
	{
		save_index = ft_foward_index(s, c, &s_index);
		array_strs[aos_i] = ft_substr(s, save_index, (s_index - save_index));
		if (!array_strs[aos_i])
			return (ft_check_free_all(array_strs, (int)aos_i));
		aos_i++;
	}
	array_strs[aos_i] = 0;
	return (array_strs);
}

static size_t	ft_foward_index(char const *str, char c, size_t *i)
{
	size_t	s_i;

	s_i = 0;
	while (str[*i] == c && str[*i])
	{
		*i = *i + 1;
	}
	s_i = *i;
	while (str[*i] != c && str[*i])
	{
		*i = *i + 1;
	}
	return (s_i);
}

static char	**ft_check_free_all(char **array_of_strs, int index)
{
	if (!array_of_strs[index])
	{
		while (index-- >= 0)
			free(array_of_strs[index]);
		free(array_of_strs);
	}
	return (NULL);
}

static size_t	ft_count_str(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str == c && *str)
		{
			while (*str == c && *str)
				str++;
		}
		if (*str != c && *str)
		{
			while (*str != c && *str)
				str++;
			count++;
		}
	}
	return (count);
}
