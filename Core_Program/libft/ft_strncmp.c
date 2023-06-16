/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:08:18 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 13:00:45 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *src, char *dest, int num)
{
	int	index;

	index = 0;
	while (src[index] && index <= num)
	{
		if (dest[index] > src[index])
			return (-1);
		else if (dest[index] < src[index])
			return (1);
		index++;
	}
	return 0;
}
