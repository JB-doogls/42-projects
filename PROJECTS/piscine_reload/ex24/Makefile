# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 17:32:11 by edoll             #+#    #+#              #
#    Updated: 2019/09/08 20:56:31 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = includes/

all:
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	ar rc libft.a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
