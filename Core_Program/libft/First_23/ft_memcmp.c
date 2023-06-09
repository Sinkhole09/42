/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:38:52 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/08 19:52:45 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_memcmp(const void* src, const void* dest, size_t num)
{
	size_t	index;
	unsigned char*	s;
	unsigned char*	d;

	s = (unsigned char*) src;
	d = (unsigned char*) dest;
	index = 0;
	while(index <= num)
	{
		if(d[index] > s[index])
			return (-1);
		else if(d[index] < s[index])
			return (1);
		index++;
	}
	return 0;
}

// int	main(void)
// {
// 	char	array1[20] = "hello World";
// 	char	array2[20] = "hello world";

// 	printf("%d\n", ft_memcmp(array1, array2, 6));
// 	return 0;
// }