/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 02:56:19 by ralves-b          #+#    #+#             */
/*   Updated: 2022/11/20 09:36:25 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux_lst;

	if (!lst)
		return (lst);
	aux_lst = lst;
	while (aux_lst->next)
		aux_lst = aux_lst->next;
	return (aux_lst);
}
