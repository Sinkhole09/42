/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:13:48 by ssilakar          #+#    #+#             */
/*   Updated: 2023/06/27 14:03:01 by ssilakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *input, ...);
void	ft_puthexa(unsigned long nbr, char *base, int *len);
void	ft_unsigned_putnbr(unsigned int nbr, int *len);
void	ft_signed_putnbr(int nb, int *len);
void	ft_putchar(char c, int *len);

#endif
// https://www.gnu.org/software/make/manual/html_node/Options-Summary.html
