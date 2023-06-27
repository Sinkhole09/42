# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 20:07:57 by ssilakar          #+#    #+#              #
#    Updated: 2023/06/27 13:38:43 by ssilakar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printf.c write_stdout_nbr_hexa.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
OBJECTS = $(CFILES:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C libft
	mv libft/libft.a ./
	mv libft.a $(NAME)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJECTS)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all