# Currect version
#####
<br/>  
    
**to fix**
* is correct the return value in case of numbers of strings with no '\n' 
* whitch file to include struct define (in case of additional func to libft using the t_gnl struct)
* edit Makefile for libft (make clear conditions about static and dinamic lib's)


#### compile with
  
    gcc get_next_line.c main.c libft/*.c

##### check reading with

	./a.out "file1"
	./a.out "file1" "file2" "file1" "file3"

##### check leak with
	
	valgrind --leak-check=full ./a.out "your_file_to_read"
