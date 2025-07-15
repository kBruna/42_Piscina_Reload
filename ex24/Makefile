# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buehara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/12 18:50:28 by buehara           #+#    #+#              #
#    Updated: 2025/07/15 10:55:41 by buehara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME = libft.a


#Compiler
CC = cc


# .c Files
C_FILES=ft_putchar.c	\
	ft_putstr.c	\
	ft_strcmp.c	\
	ft_strlen.c 	\
	ft_swap.c 


C_SOURCE = ./srcs/$(C_FILES).c


# .h Files
H_SOURCE = $(wildcard ./includes/*.h)


# Object Files
OBJ = $(C_SOURCE:.c=.o)


# Flags for compiler
CFLAGS = -Wall -Werror -Wextra


# Compilation and linking
.PHONY : all clean fclean re


all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $@ $^


%.o: %c %.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJ)


fclean:
	rm -f $(NAME)


re:
	fclean all
