/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:45:28 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 11:36:50 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(const char *str, char c)
{
	int	word_count;
	int	index;

	word_count = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != c)
		{
			word_count++;
			while (str[index] != c && str[index])
				index++;
		}
		else
			index++;
	}
	return (word_count + 1);
}

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

/*
ints[0] = col, 
[1] = val,
[2] = temp_index, 
[3] = len;
*/

size_t	f(const char *str, char c, int *index)
{
	size_t	len;

	len = 0;
	while (str[*index] != c && str[*index])
	{
		len++;
		(*index)++;
	}
	return (len);
}

char	**ft_split(const char *str, char c)
{
	char	**split_returns;
	int		ints[4];
	int		*index;

	split_returns = (char **)malloc(sizeof(char *) * (ft_word_count(str, c)));
	if (!split_returns)
		return (NULL);
	ints[0] = 0;
	ints[1] = 0;
	index = &ints[1];
	while (str[ints[1]])
	{
		if (str[ints[1]] != c)
		{
			ints[2] = ints[1];
			split_returns[ints[0]++] = ft_substr(str, ints[2],
					f(str, c, index));
		}
		else
			ints[1]++;
	}
	split_returns[ints[0]] = NULL;
	return (split_returns);
}

// int main(void)
// {
// 	char** test;
// 	int	i = 0;
// 	test = ft_split("He Fo", ' ');
// 	write(1, *test, 50);
// 	return 0;
// }