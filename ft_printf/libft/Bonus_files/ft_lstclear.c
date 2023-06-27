/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:14:22 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/22 15:11:48 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_ptr;
	t_list	*next;

	temp_ptr = *lst;
	if (del == NULL && lst == NULL)
		return ;
	while (temp_ptr != NULL)
	{
		next = temp_ptr->next;
		del(temp_ptr->content);
		free(temp_ptr);
		temp_ptr = next;
	}
	*lst = NULL;
}

	// t_list	*temp_ptr;
	// if (del == NULL && lst == NULL)
	// 	return ;
	// while (*lst)
	// {
	// 	temp_ptr = *lst;
	// 	del ((*lst)->content);
	// 	lst = temp_ptr -> next;
	// 	free(temp_ptr);
	// }