NAME = libft.a

HEAD = ./libft.h

SRC = ./*.c

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
