/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isformat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:14:15 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/14 18:13:01 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	ft_widthon(t_bool *width, char c)
{
	if (*width == FALSE && c != '0' && ft_isdigit(c))
	{
		*width = TRUE;
		return (TRUE);
	}
	return (FALSE);
}

static t_bool	has_specifier(const char *format)
{
	const char	*specifier = "cspdiuxX%";

	while (*specifier)
	{
		if (ft_strchr(format, *specifier))
			return (TRUE);
		specifier++;
	}
	return (FALSE);
}

t_bool	ft_isformat(char c, t_bool *width, const char *format)
{
	if (has_specifier(format))
	{
		if (*width == TRUE && ft_isdigit(c))
			*width = TRUE;
		else
			*width = FALSE;
		if (c == '0'
			|| c == '-'
			|| c == '+'
			|| c == '.'
			|| c == ' '
			|| c == '#'
			|| ft_widthon(width, c)
			|| *width == TRUE)
			return (TRUE);
	}
	return (FALSE);
}
