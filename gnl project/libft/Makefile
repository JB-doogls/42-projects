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

FUNCTIONS = ft_memdel \
			ft_strjoin \
			ft_strlen \
			ft_strnew \
			ft_strsub \
			ft_bzero \
			ft_strsub_free \
			ft_strchr \

			# ft_memset \
			# ft_memcpy \
			# ft_memccpy \
			# ft_memmove \
			# ft_memchr \
			# ft_memcmp \
			# ft_strdup \
			# ft_strcpy \
			# ft_strncpy \
			# ft_strcat \
			# ft_strncat \
			# ft_strlcat \
			# ft_strrchr \
			# ft_strstr \
			# ft_strnstr \
			# ft_strcmp \
			# ft_strncmp \
			# ft_atoi \
			# ft_isalpha \
			# ft_isdigit \
			# ft_isalnum \
			# ft_isascii \
			# ft_isprint \
			# ft_toupper \
			# ft_tolower \
			# ft_memalloc \
			# ft_strdel \
			# ft_strclr \
			# ft_striter \
			# ft_striteri \
			# ft_putchar_fd \
			# ft_putchar \
			# ft_putstr_fd \
			# ft_putstr \
			# ft_putendl_fd \
			# ft_putendl \
			# ft_putnbr_fd \
			# ft_putnbr \
			# ft_strmap \
			# ft_strmapi \
			# ft_strequ \
			# ft_strnequ \
			# ft_strtrim \
			# ft_iswspace \
			# ft_strsplit \
			# ft_power \
			# ft_long_power \
			# ft_strrev \
			# ft_itoa \
			# ft_lstnew \
			# ft_lstdelone \
			# ft_lstdel \
			# ft_lstadd \
			# ft_lstadd_back \
			# ft_lstiter \
			# ft_lstmap \
			# ft_lstinsert_before \
			# ft_lstinsert_after
OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.c,$(FUNCTIONS))
CFLAGS = -Wall -Wextra -Werror
HEAD = libft.h

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ): %.o : %.c
	gcc $(FLAGS) -c $<
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

va:
	valgrind --leak-check=full ./a.out