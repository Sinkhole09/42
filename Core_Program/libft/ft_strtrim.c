/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:16:14 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 13:44:34 by ssilakar         ###   ########.fr       */
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

	start = ft_position((char *)s1, (char *) set, 0, 1);
	end = ft_position((char *)s1, (char *)set,
			ft_strlen((char *)s1), -1);
	if (start > end || s1[0] == '\0')
		return (ft_strdup(""));
	ptr_trimmed = ft_substr(s1, start, end - start + 1);
	return (ptr_trimmed);
}

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



// void run_strtrim_tests()
// {
//     char* s;

//     // Test 15
//     s = ft_strtrim("abcdba", "acb");
// 	printf("test: %s\n", s);
//     printf("Test 15: %s\n", strcmp(s, "abc") == 0 ? "Pass" : "Fail");
//     free(s);
// }
// int main(void)
// {
//     run_strtrim_tests();
//     return 0;
// }