/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:56:03 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/14 18:03:57 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux_lst;
	t_list	*aux_free;

	if (lst == NULL)
		return ;
	aux_lst = *lst;
	while (aux_lst != NULL)
	{
		aux_free = aux_lst->next;
		ft_lstdelone(aux_lst, del);
		aux_lst = aux_free;
	}
	*lst = NULL;
}
