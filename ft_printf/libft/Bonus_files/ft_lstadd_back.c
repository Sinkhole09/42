/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:53:17 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 15:21:27 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstlast(t_list *lst)
// {
// 	t_list	*last_node;

// 	while (lst)
// 	{
// 		last_node = lst;
// 		lst = lst -> next;
// 	}
// 	return (last_node);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	last_node -> next = new;
}
