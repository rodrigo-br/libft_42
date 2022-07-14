/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtilchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:09:10 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/03 18:53:51 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strtilchr(const char *s, int c)
{
	char	*new_str;
	size_t	index;

	if (ft_strchr(s, c))
		index = ft_strchr(s, c) - s;
	else
		return (ft_strdup(s));
	new_str = ft_substr(s, 0, index);
	return (new_str);
}
