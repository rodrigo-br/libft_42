/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 02:56:19 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/07 02:58:06 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux_lst;

	aux_lst = lst;
	if (!lst)
		return (lst);
	while (aux_lst->next)
		aux_lst = aux_lst->next;
	return (aux_lst);
}
