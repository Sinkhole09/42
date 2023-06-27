/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:28:34 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/16 19:00:38 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dest, int value, size_t num)
{
	size_t			index;
	unsigned char	*d;

	if (num == 0)
		return (NULL);
	d = (unsigned char *)dest;
	index = 0;
	while (index < num)
	{
		if (*d == (unsigned char)value)
			return ((void *)d);
		d++;
		index++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	void *result = ft_memchr(s, 2 + 256, 3);
// 	if (result != NULL)
// 		printf("Value found: %u\n", *(unsigned char *)result);
// 	else
// 		printf("Value not found.\n");
// 	return 0;
// }