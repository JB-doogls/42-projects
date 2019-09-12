# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 23:19:50 by edoll             #+#    #+#              #
#    Updated: 2019/06/18 23:26:21 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op.a

SRC = calculate.c main.c operator_valid.c

OBJECTS = calculate.o main.o operator_valid.o

all:
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc do-op.a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
