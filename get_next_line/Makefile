# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 14:12:47 by ssilakar          #+#    #+#              #
#    Updated: 2023/07/15 18:46:22 by ssilakar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CFILES = get_next_line.c get_next_line_utils.c
# CC = gcc
# CFLAGS = -Wall -Werror -Wextra
# NAME = get_next_line.a
# OBJECTS = $(CFILES:.c=.o)
temp:
	cat clean.txt
	cc get_next_line.c get_next_line_utils.c get_next_line.h && ./a.out
	# cc -g -fsanitize=address get_next_line.c get_next_line_utils.c get_next_line.h && ./a.out
# all: $(NAME)
# #  $(BONUS_OBJECTS)
# $(NAME): $(OBJECTS)
# 	ar rcs $@ $^

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@
	
# bonus: ${OBJECTS} ${BONUS_OBJECTS}
# 	ar rcs $(NAME) ${BONUS_OBJECTS}

# clean:
# 	rm -rf $(OBJECTS) $(BONUS_OBJECTS)

# fclean: clean
# 	rm -rf $(NAME)

# re: fclean all

# .PHONY: re clean fclean all
