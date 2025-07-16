# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buehara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 19:02:19 by buehara           #+#    #+#              #
#    Updated: 2025/07/16 19:16:00 by buehara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCE = ft_display_file.c


.PHONY: all clean fclean re


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -fr $(NAME)

re: fclean all
