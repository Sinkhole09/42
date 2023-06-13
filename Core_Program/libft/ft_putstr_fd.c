/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:53:05 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/13 14:59:45 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	len_count;

	len_count = 0;
	while (*(str + len_count) != 0)
		len_count++;
	return (len_count);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

// int main(void)
// {
// 	ft_putstr_fd("Hello its me", 1);
// 	return 0;
// }