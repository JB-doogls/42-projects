# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <edoll@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 15:19:23 by edoll             #+#    #+#              #
#    Updated: 2019/11/10 16:50:31 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = map_funcs \
			list_funcs \
			reader \
			saver \
			solver \
			main
# OBJ = $(patsubst %,%.o,$(FUNCTIONS))
# SRC = $(patsubst %,%.c,$(FUNCTIONS))

SRC_DIR = ./src/
SRC = $(patsubst %,%.c,$(addprefix $(SRC_DIR),$(FUNCTIONS)))
# OBJ = $(patsubst %,%.o,$(FUNCTIONS))
OBJ = $(SRC:.c=.o)
LFT = -L $(LIBFT) -lft

CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEAD = ./includes/fillit.h
LIBFT = ./libft/
LIBFTA = ./libft/libft.a
NAME = fillit

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(LIBFTA) $(OBJ)
			$(CC) $(CFALGS) -o $(NAME) $(OBJ) $(LFT)

FORCE:		;

$(LIBFTA):	FORCE
			make -C $(LIBFT)

$(OBJ): 	%.o : %.c
			$(CC) $(CFLAGS) -c $<
			mv *.o ./src/

clean:
			rm -f $(OBJ)
			make clean -C $(LIBFT)

fclean:		clean
			rm -f $(NAME)
			make fclean -C $(LIBFT)

re:			fclean all
