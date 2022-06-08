/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:43:56 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/03 22:58:35 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		rev_index;
	char	*pointer;

	rev_index = ft_strlen(s);
	if (!rev_index && c)
		return (NULL);
	else if (!c || !rev_index)
	{
		pointer = (char *)&s[rev_index];
		return (pointer);
	}
	while (rev_index--)
	{
		if (s[rev_index] == (char)c)
		{
			pointer = (char *)&s[rev_index];
			return (pointer);
		}
	}
	return (NULL);
}
