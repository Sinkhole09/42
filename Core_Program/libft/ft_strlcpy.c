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

	len_src = (size_t)ft_strlen ((char *)src);
	if (size == 0)
		return (len_src);
	index = 0;
	while (src[index] && size--)
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

//     printf("Source: %s\n", src);
//     printf("Destination: %c\n", dest[0]);
// 	// write(1, dest + ft_strlen((char* )src) + 1, 1);
//     printf("\nLength of the copied string: %zu\n", result);

//     return 0;
// }