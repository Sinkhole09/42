/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:40:37 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 15:21:27 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	while (lst)
	{
		last_node = lst;
		lst = lst -> next;
	}
	return (last_node);
}
