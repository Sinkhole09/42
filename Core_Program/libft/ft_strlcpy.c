/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:12:08 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/08 11:12:08 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	index;

	index = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (src[index] && index < (size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (len_src);
}

size_t	ft_strlen(const char *str)
{
	size_t	len_count;

	len_count = 0;
	while (str[len_count])
		len_count++;
	return (len_count);
}

// #include <string.h>
// int main()
// {
// 	char src[] = "coucou";
// 	char dest[10]; memset(dest, 'A', 10);

//     size_t result = ft_strlcpy(dest, src, 1);

//     printf("Source: %s\nDest[0]: \n", src);
// 	write(1, dest, 1);
// 	write(1, "\nDest[1]\n", 9);
// 	write(1, dest + 1, 1);
//     printf("\nLength of the copied string: %zu\n", result);

//     return 0;
// }