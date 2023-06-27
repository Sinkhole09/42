/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:01:56 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/22 13:19:36 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*return_ptr;

	if (!(count == 0 || size == 0) && count > SIZE_MAX / size)
		return (NULL);
	return_ptr = malloc(size * count);
	if (!return_ptr)
		return (NULL);
	ft_memset(return_ptr, 0, size * count);
	return (return_ptr);
}

// void	*ft_memset(void*ptr, int value, size_t size)
// {
// 	size_t			index;
// 	unsigned char	*p;

// 	index = 0;
// 	p = (unsigned char *)ptr;
// 	while (index < size)
// 	{
// 		*p++ = (unsigned char)value;
// 		index++;
// 	}
// 	return (ptr);
// }

// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int* array;
// 	int	index;

// 	array = ft_calloc(11, sizeof(int));
// 	index = 0;
// 	while (index < 12)
// 	{
// 		printf("%d %d\n", array[index], index + 1);
// 		index++;
// 	}
// 	return 0;
// }