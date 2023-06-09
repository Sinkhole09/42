/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:34:29 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/20 19:10:44 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		index;
	char	*ptr_string;

	len = ft_strlen(src);
	index = 0;
	ptr_string = malloc(sizeof(char) * (len + 1));
	if (ptr_string == NULL)
		return (NULL);
	while (*src)
	{
		*(ptr_string + index) = *src;
		index++;
		src++;
	}
	*(ptr_string + index) = 0;
	return (ptr_string);
}
