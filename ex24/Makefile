# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buehara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/12 18:50:28 by buehara           #+#    #+#              #
#    Updated: 2025/07/16 17:05:10 by buehara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME = libft.a


#Compiler
CC = gcc


# .c Files
C_FILES=ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c 


# Directories
H_DIR = includes
S_DIR = srcs


# Object Files
OBJ = $(SRCS:.c=.o)
SRCS = $(wildcard $(S_DIR)/*.c)


# Flags for compiler
CFLAGS = -Wall -Werror -Wextra


# Compilation and linking
.PHONY : all clean fclean re


all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $@ $^


%.o: %.c
	$(CC) $(CFLAGS) -I$(H_DIR) -c $< -o $@


clean:
	rm -rf $(OBJ)


fclean:
	rm -f $(NAME)


re: fclean all
