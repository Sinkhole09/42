/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:16:14 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 13:06:33 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char*str)
{
	size_t	len_count;

	len_count = 0;
	while (str[len_count])
		len_count++;
	return (len_count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			len_sub_string;
	unsigned int	index;
	char			*ptr_substring;

	len_sub_string = ft_strlen((char *)s) + start + 1;
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

int	ft_position(char *str, char *set, int start_check_position, int value)
{
	int	check_trigger;
	int	index_set;

	check_trigger = 1;
	while (check_trigger)
	{
		check_trigger = 0;
		index_set = 0;
		while (set[index_set])
		{
			if (str[start_check_position] == set[index_set])
				check_trigger = 1;
			index_set++;
		}
		start_check_position += value;
	}
	return (start_check_position - value);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr_trimmed;

	start = ft_position((char *)s1, (char *) set, 0, 1);
	end = ft_position((char *)s1, (char *)set, ft_strlen((char *)s1) - 1, -1);
	if (start > end)
		return (NULL);
	ptr_trimmed = ft_substr(s1, start, end - start + 1);
	return (ptr_trimmed);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s", ft_strtrim("0123", "0123"));
// 	return 0;

// }
