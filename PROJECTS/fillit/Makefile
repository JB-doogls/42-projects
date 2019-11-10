# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <edoll@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 15:19:23 by edoll             #+#    #+#              #
#    Updated: 2019/11/10 14:50:02 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = ./src/map_funcs \
			./src/list_funcs \
			./src/reader \
			./src/saver \
			./src/solver \
			./src/main
# OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.c,$(FUNCTIONS))
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEAD = ./includes/fillit.h
LIBFT = ./libft/
LIBFTA = ./libft/libft.a
NAME = fillit

.PHONY: all clean fclean re

