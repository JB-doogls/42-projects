# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <edoll@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/20 22:58:53 by edoll             #+#    #+#              #
#    Updated: 2019/09/20 22:58:53 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTIONS = ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memccpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_strlen \
			ft_strdup \
			ft_strcpy \
			ft_strncpy \
			ft_strcat \
			ft_strncat \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strstr \
			ft_strnstr \
			ft_strcmp \
			ft_strncmp \
			ft_atoi \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_memalloc \
			ft_strnew \
			ft_memdel \
			ft_strdel
OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.c,$(FUNCTIONS))
INC = ./libft.h
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -I $(INC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all