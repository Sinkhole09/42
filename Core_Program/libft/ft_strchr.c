/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:46:37 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/17 13:21:32 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	if (c == 0)
		return (str + ft_strlen(str));
	if (c < 0 || c > 255)
		return (str);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

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