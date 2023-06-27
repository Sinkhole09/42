/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:18:05 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/15 12:44:30 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_integer(int i, int fd)
{
	char	c;

	c = (i + '0');
	write(fd, &c, 1);
}

int	ft_check_num(int nb, int fd)
{
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	return (nb);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	to_print;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	nb = ft_check_num(nb, fd);
	if (nb < 10)
	{
		print_integer(nb, fd);
		return ;
	}
	if (nb >= 10)
	{
		to_print = nb % 10;
		nb /= 10;
		if (nb)
			ft_putnbr_fd(nb, fd);
		print_integer(to_print, fd);
	}
}

// int main()
// {
// 	ft_putnbr_fd(-4783645, 3);
// 	return 0;
// }