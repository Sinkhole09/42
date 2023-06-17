/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:44:51 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/16 13:15:44 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_ltsnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	last_node -> next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void( *del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = ft_ltsnew(f(lst -> content));
	lst = lst -> next;
	while (*lst)
	{
		node = ft_ltsnew(f(lst -> content));
		ft_lstadd_back(&head, node);
		lst = lst -> next;
	}
	node -> next = NULL;
	return (head);
}
