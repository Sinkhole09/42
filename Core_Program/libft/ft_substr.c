/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:48:05 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/19 18:18:03 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		index;
	char	*ptr_string;

	len = ft_strlen(src);
	index = 0;
	ptr_string = malloc(sizeof(char) * len);
	while (*src)
	{
		*(ptr_string + index) = *src;
		index++;
		src++;
	}
	*(ptr_string + index) = 0;
	return (ptr_string);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	src_len;
	size_t	index;

	src_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > src_len)
		return (ft_strdup(""));
	if (len > src_len - start)
		len = src_len - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	index = start;
	while (s[index] && len)
	{
		ptr[index - start] = s[index];
		index++;
		len--;
	}
	ptr[index - start] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char * s = ft_substr("tripouille", 100, 1);
// 	printf("%s\n", s);
// 	free (s);
// 	return 0;
// }