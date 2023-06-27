/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:44:51 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 18:45:23 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void( *del)(void *))
{
	t_list	*head;
	t_list	*node;

	if (lst == NULL || del == NULL)
		return (NULL);
	if (f == NULL)
		return (lst);
	head = ft_lstnew(f(lst -> content));
	lst = lst -> next;
	while (lst)
	{
		node = ft_lstnew(f(lst -> content));
		if (!node)
			ft_lstclear(&head, del);
		ft_lstadd_back(&head, node);
		lst = lst -> next;
	}
	node -> next = NULL;
	return (head);
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*head;

// 	head = (t_list *)malloc(sizeof(t_list));
// 	if (!head)
// 		return (NULL);
// 	head -> content = content;
// 	head -> next = NULL;
// 	return (head);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last_node;

// 	last_node = ft_lstlast(*lst);
// 	last_node -> next = new;
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*temp_ptr;

// 	if (!del)
// 		return ;
// 	while (*lst)
// 	{
// 		temp_ptr = *lst;
// 		del ((*lst)->content);
// 		*lst = temp_ptr -> next;
// 		free(temp_ptr);
// 	}
// 	lst = NULL;
// 	return ;
// }
