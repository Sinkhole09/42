/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:16:14 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/22 14:54:22 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_position(char *str, char *set, int start_check_position, int value)
{
	int	check_trigger;
	int	index_set;

	if (str[start_check_position] == '\0')
		start_check_position--;
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

	if (!s1)
		return (NULL);
	start = ft_position((char *)s1, (char *) set, 0, 1);
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_position((char *)s1, (char *)set,
			ft_strlen((char *)s1), -1);
	ptr_trimmed = ft_substr(s1, start, end - start + 1);
	return (ptr_trimmed);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strtrim("//////", "/"));
// }

// static int	is_wspace(char c, char const *set)
// {
// 	while (*set)
// 	{
// 		if (c == *set)
// 			return (1);
// 		set++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	k;
// 	char			*res;

// 	if (!s1 || !set)
// 		return (0);
// 	i = 0;
// 	j = ft_strlen(s1) - 1;
// 	k = 0;
// 	while (s1[i] && is_wspace(s1[i], set))
// 		i++;
// 	if (s1[i] == '\0')
// 		return (ft_strdup(""));
// 	while (s1[j] && is_wspace(s1[j], set))
// 		j--;
// 	res = malloc((j - i + 1) * sizeof(char) + 1);
// 	if (!res)
// 		return (0);
// 	while (i <= j)
// 		res[k++] = s1[i++];
// 	res[k] = '\0';
// 	return (res);
// }

// size_t	ft_strlen(const char *str)
// {
// 	size_t	len_count;
// 	len_count = 0;
// 	while (*(str + len_count) != 0)
// 		len_count++;
// 	return (len_count);
// }
// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	char	*ptr;
// 	size_t	index;
// 	ptr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!ptr)
// 		return (NULL);
// 	index = start;
// 	while (s[index] && len)
// 	{
// 		ptr[index - start] = s[index];
// 		index++;
// 		len--;
// 	}
// 	ptr[index - start] = '\0';
// 	return (ptr);
// }
