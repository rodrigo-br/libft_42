/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:09:18 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/06 23:44:03 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str	handle_ptr(va_list args, int *count, t_flags *flags)
{
	unsigned long int	ptr;
	t_str				str;
	void				*void_tmp;

	void_tmp = va_arg(args, void *);
	ptr = ft_ptoi(void_tmp);
	if (ptr == 0)
	{
		str.s = ft_strdup("(nil)");
		str.size = 5;
		flags->null = TRUE;
	}
	else
	{
		str.s = ft_uitohex(ptr);
		str.size = ft_strlen(str.s);
	}
	*count += str.size;
	return (str);
}
