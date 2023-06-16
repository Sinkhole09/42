/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:27:35 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 12:44:14 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void*ptr, int value, size_t size)
{
	size_t			index;
	unsigned char	*p;

	index = 0;
	p = (unsigned char *)ptr;
	while (index < size)
	{
		*p++ = (unsigned char)value;
		index++;
	}
	return (ptr);
}

// int main(void)
// {
// 	char str[10];

// 	ft_memset(str, 35, sizeof(str));

// 	int i;

// 	i = 0;
// 	while(i < 10)
// 		printf("%c", str[i++]);
// }