/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:28:34 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 12:50:49 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dest, int value, size_t num)
{
	size_t			index;
	unsigned char	*d;

	d = (unsigned char *)dest;
	index = 0;
	while (index < num && *d)
	{
		if (*d == value)
			return ((void *)d);
		d++;
	}
	return ((void *)dest);
}
