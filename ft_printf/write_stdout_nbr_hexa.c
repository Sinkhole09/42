/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_stdout_nbr_hexa.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:35:23 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/27 14:41:09 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long nbr, char *base, int *len)
{
	if (nbr >= 16)
		ft_puthexa(nbr / 16, base, len);
	(*len)++;
	write(1, &base[nbr % 16], 1);
}

//
void	ft_unsigned_putnbr(unsigned int nbr, int *len)
{
	if (nbr >= 10)
		ft_unsigned_putnbr(nbr / 10, len);
	write (1, &"0123456789"[nbr % 10], 1);
	(*len)++;
}

//
int	ft_check_num(int nb, int *len)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		(*len)++;
	}
	return (nb);
}

void	ft_signed_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	nb = ft_check_num(nb, len);
	if (nb >= 10)
		ft_signed_putnbr(nb / 10, len);
	write (1, &"0123456789"[nb % 10], 1);
	(*len)++;
}
