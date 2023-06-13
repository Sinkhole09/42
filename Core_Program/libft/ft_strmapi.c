/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:02:34 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/13 12:27:37 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*str_retrn;

	index = 0;
	str_retrn = (char *)malloc(sizeof(char) * ft_strlen((char *)s));
	while (s[index])
	{
		str_retrn[index] = f(index, s[index]);
		index++;
	}
	return (str_retrn);
}

// char	ft_subtract_ascii(unsigned int n, char c)
// {
// 	return (c - n);
// }

// int main(void)
// {
// 	char*	s1 = "Hello from the other side";
// 	char*	s2;

// 	s2 = ft_strmapi(s1, ft_subtract_ascii);
// 	printf("%s\n%s", s1, s2);
// 	return 0;
// }
