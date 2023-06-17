/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:27:26 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/17 17:31:10 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	dest_len;
	size_t	src_len;

	index = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while (src[index] && index < size - dest_len - 1)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}

//#include <stdio.h>
// int	main(void)
// {
// 	char	src[100] = "I got hoes123456789";
// 	char	dest[25] = "Polo :";
// 	printf("%ld\n", ft_strlcat(dest, src, 25 - ft_strlen(dest) + 1));
// 	printf("%s", dest);
// }