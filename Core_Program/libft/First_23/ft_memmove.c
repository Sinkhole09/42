/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:28:21 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/08 10:44:30 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*	ft_memmove(void* dest, const void* src, size_t num)
{
	size_t	index;
	unsigned char*	d;
	const unsigned char* s;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	if(d > s)
	{
		index = num - 1;
		while(index >= 0)
			d[index] = src[index--];
	}
	else if(d < s):
	{
		index = 0;
		while(index < num)
		{
			d[index] = s[index];
			index ++;
		}
	}
	return(dest);
}