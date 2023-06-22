/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:46:37 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/22 12:44:43 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int k)
{
	unsigned char	c;

	c = (unsigned char)k;
	if (c == 0)
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     char s[] = "tripouille";
//     char *result = ft_strchr(s, 't' + 256);

//     if (result != NULL) {
//         printf("Character found at position: %ld\n", result - s);
//     } else {
//         printf("Character not found.\n");
//     }

//     return 0;
// }