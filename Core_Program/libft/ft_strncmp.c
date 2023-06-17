/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:08:18 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/17 17:34:37 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t num)
{
	size_t	index;

	index = 0;
	if ((*s1 == '\0' && *s2 == '\0') || num == 0)
		return (0);
	while (s1[index] && s2[index] && num)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
		num--;
	}
	if (s1[index] == '\0' && !(s2[index] == '\0'))
		return (0 - s2[index]);
	else if (s2[index] == '\0' && !(s1[index] == '\0'))
		return (s1[index]);
	return (0);
}
