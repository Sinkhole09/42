/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:02:34 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/13 12:14:58 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*str_retrn;

	index = 0;
	strRetrn = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[index])
	{
		strRetrn[index] = f(index, s[index]);
		index++;
	}
	return (str_retrn);
}

int main(void)
{

}
