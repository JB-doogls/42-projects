NAME = libft.a

HEAD = ./libft.h

SRC = ./ft_atoi.c ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c \
	  ./ft_isdigit.c ./ft_ifprint.c ./ft_memccpy.c ./ft_memcpy.c ./ft_memmove.c \
	  ./ft_memset.c ./ft_strcat.c ./ft_strchr.c ./ft_strcmp.c ./ft_strcpy.c \
	  ./ft_strdup.c ./ft_strlcat.c ./ft_strlen.c ./ft_strncat.c ./ft_strncmp.c \
	  ./ft_strncpy.c ./ft_strnstr.c ./ft_strrchr.c ./ft_strstr.c .\
	  ./ft_tolower.c ./ft_toupper.c

OBJ = ./*.o

.PHONY: all, clean, fclean, re

all:
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEAD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
