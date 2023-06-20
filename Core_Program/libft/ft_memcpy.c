/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:13:09 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 18:55:22 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t				index;
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	index = 0;
	while (index < num)
	{
		*(d + index) = s[index];
		index++;
	}
	return (dest);
}
