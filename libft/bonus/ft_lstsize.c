/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 02:45:28 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/14 18:04:09 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int		length;
	t_list	*aux_lst;

	length = 0;
	aux_lst = lst;
	while (aux_lst)
	{
		aux_lst = aux_lst->next;
		length++;
	}
	return (length);
}
