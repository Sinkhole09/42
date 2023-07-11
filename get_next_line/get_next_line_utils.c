/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:02:58 by ssilakar          #+#    #+#             */
/*   Updated: 2023/07/11 19:52:21 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	src_len;
	size_t	index;

	src_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_joined;
	int		index;
	int		suffix_index;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	ptr_joined = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (ptr_joined == NULL)
		return (NULL);
	index = 0;
	while (index < len_s1)
	{
		ptr_joined[index] = s1[index];
		index++;
	}
	suffix_index = 0;
	while (index < (len_s1 + len_s2))
		ptr_joined[index++] = s2[suffix_index++];
	ptr_joined[index] = '\0';
	free((void *)s1);
	return (ptr_joined);
}

void	*ft_calloc(size_t count, size_t size)
{
	void			*return_ptr;

	if (!(count == 0 || size == 0) && count > SIZE_MAX / size)
		return (NULL);
	return_ptr = malloc(size * count);
	if (!return_ptr)
		return (NULL);
	ft_memset(return_ptr, 0, size * count);
	return (return_ptr);
}

void	*ft_memset(void*ptr, int value, size_t size)
{
	size_t			index;
	unsigned char	*p;

	index = 0;
	p = (unsigned char *)ptr;
	while (index < size)
	{
		*p++ = (unsigned char)value;
		index++;
	}
	return (ptr);
}
