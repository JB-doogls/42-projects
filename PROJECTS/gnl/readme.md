# Firts correct version
#### Work with basic issues: read from file (fd > 2) and store in char **line
---

**smth to fix**
* check on mem. leaks and fix;
* add option reading from any fd & option to read sequence of fd
* check functions and clean-up (set spec funcs for lists + check libft.h funcs for upgrades (strjoin_free(?))


#### compile with
  
    gcc ft_get_next_line.c get_next_line.h main.c libft/*.c libft/*.h

##### check reading with

	./a.out "file1"
	./a.out "file1" "file2" "file1" "file3"

##### check leak with
	
	valgrind --leak-check=full ./a.out "your_file_to_read"
