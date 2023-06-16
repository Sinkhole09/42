/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:01:56 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 12:37:00 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*return_ptr;
	unsigned char	*temp;
	size_t			index;

	return_ptr = malloc(size * count);
	temp = (unsigned char *)return_ptr;
	index = 0;
	while (index < count * size + 1)
		temp[index++] = '\0';
	return (return_ptr);
}

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