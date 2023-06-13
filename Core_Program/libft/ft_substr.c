/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:48:05 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/12 13:57:21 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				len_sub_string;
	unsigned int	index;
	char			*ptr_substring;

	len_sub_string = ft_strlen(((char *)s + start + 1));
	if (len_sub_string < len)
		ptr_substring = (char *)malloc(sizeof(char) * (len_sub_string + 1));
	else
		ptr_substring = (char *)malloc(sizeof(char) * len);
	if (ptr_substring == NULL)
		return (NULL);
	index = start;
	while (s[index] && (index - start) < len)
	{
		ptr_substring[index - start] = s[index];
		index++;
	}
	ptr_substring[index] = '\0';
	return (ptr_substring);
}

// #include <stdio.h>


// int	main(void)
// {
// 	char	*s = "King Von";
// 	char*	ptr = ft_substr(s, 5, 2);

// 	printf("%s", ptr);
// 	return 0;
// }