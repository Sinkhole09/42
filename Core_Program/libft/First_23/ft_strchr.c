/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:46:37 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/09 11:09:59 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*	ft_strchr(char* str, int c)
{
	if (c == '\0')
		return (str);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[20] = "I got money";
// 	char	check = 'a';

// 	printf("%s", ft_strchr(str, check));
// 	return 0;
// }