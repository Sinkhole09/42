/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:36:57 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 11:58:46 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_joined;
	int		index;
	int		suffix_index;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	ptr_joined = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (ptr_joined == NULL)
		return (NULL);
	index = 0;
	while (index < len_s1)
	{
		ptr_joined[index] = s1[index];
		index++;
	}
	suffix_index = 0;
	while (index < (len_s1 + len_s2))
		ptr_joined[index++] = s2[suffix_index++];
	ptr_joined[index] = '\0';
	return (ptr_joined);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*s = "King";
// 	char	*t = " Von";
// 	char*	ptr = ft_strjoin(s, t);

// 	printf("%s", ptr);
// 	return 0;
// }