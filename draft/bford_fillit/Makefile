# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 11:34:46 by bford             #+#    #+#              #
#    Updated: 2019/09/27 22:14:49 by kpsylock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME	= fillit


SRC_DIR = ./src
FILES	=	main.c ft_make_array_great_again.c\
 			ft_makemap.c ft_min_square.c ft_clear_map.c ft_check_borders.c
SRC		= $(addprefix $(SRC_DIR)/,$(FILES))
INC		= fillit.h
OBJ		= $(SRC:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) | lib
	@$(CC) $(CFLAGS) -L ./libft -lft -I . -I ./libft $(OBJ) -o $(NAME)

%.o: %.c $(INC)
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

lib:
	@make -C ./libft

clean:		
	@/bin/rm -f $(OBJ)
	@make clean -C ./libft

fclean: 	clean
	@make fclean -C ./libft
	@/bin/rm -f $(NAME)

re: fclean all
