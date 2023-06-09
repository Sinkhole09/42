/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:06:39 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/08 17:16:30 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char*str)
{
    int len_count;

    len_count = 0;
    while(*(str + len_count) != 0)
        len_count++;
    return (len_count);
}

char*	ft_strrchar(char* str, char c)
{
	int	index;

	index = ft_strlen(str) - 1;
	if(c == '\0')
		return (str);
	while (index >= 0)
	{
		if (str[index] == c)
			return (str + index);
		index--;
	}
	return (NULL);
}


int	main(void)
{
	char	str[20] = "I got money";
	char	check = 'a';

	printf("%s", ft_strrchr(str, check));
	return 0;
}