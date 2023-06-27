/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:02:34 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 20:17:01 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*str_retrn;

	index = 0;
	if (!s || !f)
		return (NULL);
	str_retrn = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!str_retrn)
		return (NULL);
	while (s[index])
	{
		str_retrn[index] = f(index, s[index]);
		index++;
	}
	str_retrn[index] = '\0';
	return (str_retrn);
}

// size_t	ft_strlen(const char *str)
// {
// 	size_t	len_count;

// 	len_count = 0;
// 	while (*(str + len_count) != 0)
// 		len_count++;
// 	return (len_count);
// }

// #include <string.h>
// char addOne(unsigned int i, char c) {return (i + c);}

// int main(void)
// {
// 	char* s2 = ft_strmapi("", addOne);
// 	printf("%d", strcmp(s2, ""));
// 	free(s2);
// 	return 0;
// }
