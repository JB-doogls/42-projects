# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 20:02:29 by edoll             #+#    #+#              #
#    Updated: 2019/09/10 20:23:24 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = *.c

all: $(NAME)
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
