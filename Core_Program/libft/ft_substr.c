/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:48:05 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/19 15:06:57 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	src_len;
	size_t	index;

	src_len = ft_strlen(s);
	if (s == NULL || len == 0 || start > src_len)
		return (NULL);
	if (len > src_len)
		len = src_len + 1;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	index = start;
	while (s[index] && len)
	{
		ptr[index - start] = s[index];
		index++;
		len--;
	}
	return (ptr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	if (!s)
// 		return (NULL);
// 	if (ft_strlen(s) < len)
// 		len = ft_strlen(s);
// 	str = malloc(sizeof(char) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			str[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[j] = '\0';
// 	return (str);
// }

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	unsigned int	index;
// 	char			*ptr_substring;

// 	ptr_substring = (char *)malloc(sizeof(char) * (len + 1));
// 	if (ptr_substring == NULL)
// 		return (NULL);
// 	index = 0;
// 	while (index < len && s[start + index])
// 	{
// 		ptr_substring[index] = s[start + index];
// 		index++;
// 	}
// 	ptr_substring[index] = '\0';
// 	return (ptr_substring);
// }


// #include <stdio.h>
// int	main(void)
// {
// 	char	*s = "King Von";
// 	char*	ptr = ft_substr(s, 5, 2);
// 	printf("%s", ptr);
// 	return 0;
// }