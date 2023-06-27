/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:47:47 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/27 14:29:33 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	(*len) += write(1, &c, 1);
}

//
void	ft_putstr(char *str, int *len)
{
	int	l;

	if (str == NULL)
	{
		(*len) += write(1, "(null)", 6);
		return ;
	}
	l = ft_strlen(str);
	write(1, str, l);
	(*len) += l;
}

//cspdiuxX%
//ft_putchar ft_unsigned_putnbr ft_signed_putnbr ft_puthexa ft_putstr
void	id_type(const char *input, int *len, va_list args)
{
	if (*input == 'c')
		ft_putchar(va_arg(args, int), len);
	if (*input == '%')
		ft_putchar('%', len);
	else if (*input == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*input == 'd' || *input == 'i')
		ft_signed_putnbr(va_arg(args, int), len);
	else if (*input == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned int), len);
	else if (*input == 'x')
		ft_puthexa(va_arg(args, unsigned int), "0123456789abcdef", len);
	else if (*input == 'X')
		ft_puthexa(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	else if (*input == 'p')
	{
		(*len) += write(1, "0x", 2);
		ft_puthexa(va_arg(args, uintptr_t), "0123456789abcdef", len);
	}
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			id_type(++input, &len, args);
			input++;
		}
		else
		{
			write(1, input++, 1);
			len++;
		}
	}
	va_end(args);
	return (len);
}
