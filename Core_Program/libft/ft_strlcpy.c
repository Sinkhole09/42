/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:12:08 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/08 11:12:08 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char*str)
{
	size_t	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	len_src;
	int		index;

	len_src = ft_strlen(src);
	if (len_src <= size)
	{
		index = -1;
		while (index++ < (int)len_src)
			*(dest + index) = *(src + index);
	}
	else
	{
		index = -1;
		while (index++ < (int)size)
			*(dest + index) = *(src + index);
	}
	*(dest + ft_strlen(dest)) = 0;
	return (ft_strlen(dest));
}

// int	main(void)
// {
// 	char	src[11] = "0123456789";
// 	char	dest[27] = "abcdefghijklmnopqrstuvxyz";

// 	printf("%s\n", dest);
// 	printf("%ld\n", ft_strlcpy(dest, src, 26));
// 	printf("%s", dest);
// }