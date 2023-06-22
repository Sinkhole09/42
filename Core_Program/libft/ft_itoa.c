/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:51:32 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 20:54:23 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_recursive_fucntion(char *array, long n, long *index)
{
	unsigned int	to_save;

	to_save = n % 10;
	if (n >= 10)
	{
		n /= 10;
		ft_recursive_fucntion(array, n, index);
	}
	array[*index] = to_save + '0';
	*index += 1;
	return ;
}

int	calc_magnitude(long n)
{
	int		magnitude;
	long	temp;

	if (n < 0)
		n *= -1;
	magnitude = 1;
	temp = n;
	while (temp >= 10)
	{
		temp /= 10;
		magnitude += 1;
	}
	return (magnitude);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		magnitude;
	long	num_pointer;

	num_pointer = 0;
	magnitude = calc_magnitude(n);
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		magnitude += 1;
	}
	str = (char *)malloc(sizeof(char) * (magnitude + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num_pointer = 1;
		n *= -1;
	}
	ft_recursive_fucntion(str, (long)n, &num_pointer);
	str[num_pointer] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char* str = ft_itoa(-985);
// 	printf("%s", str);
// 	return 0;
// }