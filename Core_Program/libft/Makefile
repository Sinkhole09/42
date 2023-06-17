# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 18:54:02 by ssilakar          #+#    #+#              #
#    Updated: 2023/06/16 15:37:05 by ssilakar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
# INCLUDE_DIRECTORIES = ./First_23 ./Additional_functions
LIBRARY = libft.a

# CFILES = $(foreach D, $(INCLUDE_LIBRARIES), $(wildcard $(D)/*.c))
CFILES = $(wildcard ./*.c)

OBJECTS = $(CFILES:.c=.o)

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)

fclean: clean
	rm $(LIBRARY)

re: fclean all