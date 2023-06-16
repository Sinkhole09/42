/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:56:23 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 12:36:45 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	num_to_return;
	int	is_neg;

	is_neg = 0;
	if (*str == '-')
	{
		is_neg = 1;
		str++;
	}
	num_to_return = 0;
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
