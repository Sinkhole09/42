/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:56:23 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/22 13:24:12 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_check_sign(const char **str, int *neg)
{
	int	is_neg;
	int	sign_count;

	is_neg = 0;
	sign_count = 0;
	while (**str == '-' || **str == '+')
	{
		sign_count++;
		if (sign_count > 1)
			return (-1);
		if (**str == '-')
			is_neg = 1;
		(*str)++;
	}
	*neg = is_neg;
	return (1);
}

int	ft_atoi(const char *str)
{
	int	is_neg;
	int	check;
	int	num_to_return;

	num_to_return = 0;
	while (*str == '\t' || *str == '\r' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == ' ')
		str++;
	check = ft_check_sign(&str, &is_neg);
	if (check == -1)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		num_to_return *= 10;
		num_to_return += (*str - 48);
		str++;
	}
	if (is_neg)
		num_to_return *= -1;
	return (num_to_return);
}

// #include <stdio.h>

// int	main()
// {
// 	char	s1[] ="  \n \v \r \f \e \t  -4123\n567";
// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d", atoi(s1));
// 	return 0;
// }

// int	ft_atoi(const char *str)
// {
// 	int	num_to_return;
// 	int	is_neg;

// 	is_neg = 0;
// 	if (*str == '-' || *str == '+')
// 	{
// 		str++;
// 		if (*str == '-')
// 			is_neg = 1;
// 	}
// 	num_to_return = 0;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		num_to_return *= 10;
// 		num_to_return += (*str - 48);
// 		str++;
// 	}
// 	if (is_neg)
// 		num_to_return *= -1;
// 	return (num_to_return);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char escape[] = {9, 10, 11, 12, 13, 0};
//     char e[10];
//     strcpy(e, escape);
//     strcat(e, "1");

//     printf("%d", ft_atoi(e));

//     return 0;
// }