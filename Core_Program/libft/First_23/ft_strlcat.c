/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:27:26 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/08 11:11:56 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(char*str)
{
    size_t len_count;

    len_count = 0;
    while (*(str + len_count) != 0)
        len_count++;
    return (len_count);
}

size_t	ft_strlcat(char* dest, char* src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	index;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_src <= size)
	{
		index = 0;
		while (index < len_src)
			*(dest + len_dest++) = *(src + index++);
	}
	else
	{
		index = 0;
		while(index < size)
			*(dest + len_dest++) = *(src + index++);
	}
	*(dest + index) = 0;
	return(ft_strlen(dest));
}

//#include <stdio.h>

// int	main(void)
// {
// 	char	src[100] = "I got hoes123456789";
// 	char	dest[25] = "Polo :";


// 	printf("%ld\n", ft_strlcat(dest, src, 25 - ft_strlen(dest) + 1));
// 	printf("%s", dest);
// }