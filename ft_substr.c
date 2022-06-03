/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 22:54:51 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/03 03:46:15 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	s_len;
	unsigned int	max_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len > start)
		max_len = s_len - start;
	else
		max_len = 0;
	if (max_len > len)
		max_len = len;
	new_str = (char *)malloc((max_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s + start, max_len + 1);
	return (new_str);
}
