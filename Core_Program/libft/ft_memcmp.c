/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:38:52 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/16 19:28:09 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *src, const void *dest, size_t num)
{
	size_t			index;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	index = 0;
	while (index < num)
	{
		if (d[index] > s[index])
			return (-1);
		else if (d[index] < s[index])
			return (1);
		index++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	printf("%d\n", ft_memcmp(s2, s3, 4));
// 	return 0;
// }