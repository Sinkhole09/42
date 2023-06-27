# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssilakar <ssilakar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 18:54:02 by ssilakar          #+#    #+#              #
#    Updated: 2023/06/22 13:22:49 by ssilakar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CFILES = $(foreach D, $(INCLUDE_LIBRARIES), $(wildcard $(D)/*.c))
CFILES =	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_striteri.c \
			ft_tolower.c \
			ft_toupper.c

BONUS_CFILES =	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c

BONUS_OBJECTS = $(BONUS_CFILES:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
OBJECTS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(BONUS_OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
bonus: ${OBJECTS} ${BONUS_OBJECTS}
	ar rcs $(NAME) ${BONUS_OBJECTS}

clean:
	rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all
