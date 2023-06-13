/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:51:32 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/13 11:38:05 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*return_ptr;
	unsigned char	*temp;
	size_t			index;

	return_ptr = malloc(size * count);
	temp = (unsigned char *)return_ptr;
	index = 0;
	while (index < count * size + 1)
		temp[index++] = '\0';
	return (return_ptr);
}

void	ft_recursive_fucntion(char *array, int n, int *index)
{
	int	to_save;

	to_save = n % 10;
	if (n > 10)
	{
		n /= 10;
		ft_recursive_fucntion(array, n, index);
	}
	array[*index] = to_save + '0';
	*index += 1;
	return ;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		magnitude;
	int		power_ten;
	int		*num_pointer;

	num_pointer = (int *)ft_calloc(1, sizeof(int));
	magnitude = 1;
	power_ten = 10;
	while ((n / power_ten))
	{
		power_ten *= 10;
		magnitude += 1;
	}
	if (n < 0)
		magnitude += 1;
	str = (char *)malloc(sizeof(char) * magnitude);
	if (n < 0)
	{
		str[0] = '-';
		*num_pointer = 1;
		n *= -1;
	}
	ft_recursive_fucntion(str, n, num_pointer);
	return (str);
}

// int	main(void)
// {
// 	char* str = ft_itoa(-985);
// 	printf("%s", str);
// 	return 0;
// }