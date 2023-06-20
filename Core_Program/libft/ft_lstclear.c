/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:14:22 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 18:06:46 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (*lst)
	{
		temp = *lst;
		ft_lstdelone(temp, del);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
