# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 16:46:18 by edehmlow          #+#    #+#              #
#    Updated: 2018/09/11 21:45:42 by edehmlow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror -c

LIBDIR = libft/
LIB = $(LIBDIR)libft.a

SRC = ft_printf.c output_handling.c

DIR_SRC = srcs/

SRCS = $(addprefix $(DIR_SRCS), $(SRC))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	make -C $(LIBDIR)
	$(CC) $(SRC) $(FLAGS) $(NAME) $(LIB)

clean:
	rm -rf $(OBJ)
	make clean -C $(LIBDIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBDIR)

re: fclean all
