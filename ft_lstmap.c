/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 03:12:04 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/08 17:48:43 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_lst_aux;

	if (!del || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new_lst_aux = ft_lstnew(f(lst->content));
		if (!new_lst_aux)
		{
			if (head)
				ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_lst_aux);
		lst = lst->next;
	}
	return (head);
}
