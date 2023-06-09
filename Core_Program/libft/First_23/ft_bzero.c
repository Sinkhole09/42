/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:25:17 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/09 11:12:03 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void*ptr, size_t size)
{
	size_t			index;
	unsigned char	*p;

	index = 0;
	p = (unsigned char *)ptr;
	while (index < size)
	{
		*p++ = 0;
		index++;
	}
	return (ptr);
}