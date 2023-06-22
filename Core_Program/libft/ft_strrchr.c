/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:06:39 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/22 12:43:23 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int k)
{
	int				index;
	int				temp_index;
	unsigned char	c;

	c = (unsigned char)k;
	if ((*str == '\0' && c == 0))
		return ((char *)str);
	if (str == NULL || *str == '\0')
		return (NULL);
	if (c == 0)
		return ((char *)str + ft_strlen(str));
	temp_index = -1;
	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			temp_index = index;
		index++;
	}
	if (temp_index == -1)
		return (NULL);
	return ((char *)str + temp_index);
}

// size_t	ft_strlen(const char *str)
// {
// 	size_t	len_count;

// 	len_count = 0;
// 	while (*(str + len_count) != 0)
// 		len_count++;
// 	return (len_count);
// }

// #include <stdio.h>
// int main()
// {
// 	char s[] = "tripouille";
// 	// char s2[] = "ltripouiel";
// 	// char s3[] = "";
// 	// char* empty = (char*)calloc(1, 1);
// 	char*	v;
// 	v = s;
//     char *result = ft_strrchr(v, 0);

//     if (result != NULL)
//         printf("Last occurrence found at index: %ld\n", result - v);
//     else
//         printf("not found in the string.\n");

//     return 0;
// }