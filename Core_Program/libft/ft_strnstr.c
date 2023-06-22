/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:42:22 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 19:55:56 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	index;

	if ((str == NULL || to_find == NULL) && len == 0)
		return (0);
	if (*to_find == '\0')
		return ((char *)str);
	while (*str && len > 0)
	{
		if (*str == *to_find)
		{
			index = 0;
			while (str[index] == to_find[index]
				&& to_find[index] && index < len)
				index++;
			if (to_find[index] == '\0')
				return ((char *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void) {
//     char haystack[] = "Hello, World! This is a test string.";
//     char needle1[] = "World";
//     char needle2[] = "test";
//     char needle3[] = "foo";

//     char *result1 = ft_strnstr(haystack, needle1, 0);
//     char *result2 = ft_strnstr(haystack, needle2, sizeof(haystack));
//     char *result3 = ft_strnstr(haystack, needle3, sizeof(haystack));

//     if (result1)
//         printf("Needle '%s' found at position: %ld\n",
			// needle1, result1 - haystack);
//     else
//         printf("Needle '%s' not found\n", needle1);

//     if (result2)
//         printf("Needle '%s' found at position: %ld\n", 
//needle2, result2 - haystack);
//     else
//         printf("Needle '%s' not found\n", needle2);

//     if (result3)
//         printf("Needle '%s' found at position: %ld\n",
// needle3, result3 - haystack);
//     else
//         printf("Needle '%s' not found\n", needle3);

//     return 0;
// }