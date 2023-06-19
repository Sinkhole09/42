/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:16:14 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/19 17:51:00 by ssilakar         ###   ########.fr       */
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
	end = ft_position((char *)s1, (char *)set,
			ft_strlen((char *)s1), -1);
	if (start > end)
		return (NULL);
	ptr_trimmed = ft_substr(s1, start, end - start + 1);
	return (ptr_trimmed);
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
// #include <string.h>

// void run_strtrim_tests()
// {
//     char* s;

//     // Test 1
//     s = ft_strtrim("   xxxtripouille", " x");
//     printf("Test 1: %s\n", strcmp(s, "tripouille") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 2
//     s = ft_strtrim("tripouille   xxx", " x");
//     printf("Test 2: %s\n", strcmp(s, "tripouille") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 3
//     s = ft_strtrim("   xxxtripouille   xxx", " x");
//     printf("Test 3: %s\n", strcmp(s, "tripouille") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 4
//     s = ft_strtrim("   xxx   xxx", " x");
//     printf("Test 4: %s\n", strcmp(s, "") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 5
//     s = ft_strtrim("", "123");
//     printf("Test 5: %s\n", strcmp(s, "") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 6
//     s = ft_strtrim("123", "");
//     printf("Test 6: %s\n", strcmp(s, "123") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 7
//     s = ft_strtrim("", "");
//     printf("Test 7: %s\n", strcmp(s, "") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 8
//     s = ft_strtrim("abcdba", "acb");
//     printf("Test 8: %s\n", strcmp(s, "d") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 9
//     s = ft_strtrim("   ", " ");
//     printf("Test 9: %s\n", strcmp(s, "") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 10
//     s = ft_strtrim(" \t \n ", " \t\n");
//     printf("Test 10: %s\n", strcmp(s, "") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 11
//     s = ft_strtrim("  hello world  ", " ");
//     printf("Test 11: %s\n", strcmp(s, "hello world") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 12
//     s = ft_strtrim("hello world", "xyz");
//     printf("Test 12: %s\n", strcmp(s, "hello world") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 13
//     s = ft_strtrim("  hello  ", "");
//     printf("Test 13: %s\n", strcmp(s, "  hello  ") == 0 ? "Pass" : "Fail");
//     free(s);
// 	//Test 14
// 	s = ft_strtrim("", "xyz");
//     printf("Test 14: %s\n", strcmp(s, "") == 0 ? "Pass" : "Fail");
//     free(s);

//     // Test 15
//     s = ft_strtrim("   abc  xyz  ", "xyz ");
//     printf("Test 15: %s\n", strcmp(s, "abc") == 0 ? "Pass" : "Fail");
//     free(s);
//    // Test 16
//     s = ft_strtrim("abc", "xyz");
//     printf("Test 16: %s\n", strcmp(s, "abc") == 0 ? "Pass" : "Fail");
//     free(s);
// }
// int main(void)
// {
//     run_strtrim_tests();
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s", ft_strtrim("0123", "0123"));
// 	return 0;

// }
