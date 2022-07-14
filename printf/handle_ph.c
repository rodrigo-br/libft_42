/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:59:17 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/05 05:09:06 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str	handle_ph(int *count)
{
	t_str	str;

	str.s = ft_strdup("%");
	str.size = 1;
	*count += str.size;
	return (str);
}
