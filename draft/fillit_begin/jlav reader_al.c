/*
********************************
			.H		
********************************
*/

#ifndef READER_H
# define READER_H
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"
# define NUM_CHARS_IN_BLOCK_WITH_NEWLINE 21
# define NUM_CHARS_IN_BLOCK 20
# define MAX_NUM_BLOCKS 26

typedef struct		s_tetri
{
	int		 		shape[8];
	struct s_tetri 	*next;
}					t_tetri;

int	read_input(int fd);
#endif


/*
********************************
			MAIN		
********************************
*/


int main(int argc, char **argv)
{
	char    *file_path;
	int     fd;

	if (argc == 2)
	{
		ft_putendl("Success");
		file_path = argv[1];

		fd = open(file_path, O_RDONLY);
		if (fd != -1)
		{
			ft_putnbr(read_input(fd));
		}
		else
		{
			ft_putendl("Error");
			return (0);
		}
		if (close(fd) == -1)
		{
			ft_putendl("Error");
			return (0);
		}
		return (1);
	}
	else
	{
		ft_putendl("Error");
		return (0);
	}
}


/*
********************************
			READER		
********************************
*/


/*
** Counts adjacent filled spaces (right, left, down, up) and return their number.
*/

int	count_adjacent(int i, char *block)
{
	int		num_adjacent;

	num_adjacent = 0;
	if ((i + 1 <= 18) && (block[i + 1] == '#'))
		++num_adjacent;
	if ((i - 1 >= 0) && (block[i - 1] == '#'))
		++num_adjacent;
	if ((i + 5 <= 18) && (block[i + 5] == '#'))
		++num_adjacent;
	if ((i - 5 >= 0) && (block[i - 5] == '#'))
		++num_adjacent;
	return (num_adjacent);
}

/*
** Checks if block is invalid.
** Checks:
** 		- only '#', '.' and '\n' chars?
** 		- exactly 4 '#' chars and 6 or 8 connections?
** 		- every 5-char line of a block ends with a '\n'?
**		- the char after the block is either a '\n' or '\0' ?  
** Returns 1 if invalid, 0 if valid.
*/

int	block_invalid(char *block)
{
	int		i;
	int		num_hashes;
	int		num_connections;

	i = 0;
	num_hashes = 0;
	num_connections = 0;
	while (i < NUM_CHARS_IN_BLOCK - 1)
	{
		if (block[i] && (block[i] != '#') && (block[i] != '.') && (block[i] != '\n'))
			return (1);
		if (block[i] == '#')
		{
			++num_hashes;
			num_connections += count_adjacent(i, block);
		}
		if ((block [i] == '\n') && !((i + 1) % 5 == 0))
			return (1);
		++i;
	}
	if ((block[i + 1] != '\n') && (block[i + 1] != '\0'))
		return (1);
	if ((num_hashes != 4 && num_connections != 6) ||
	(num_hashes != 4 && num_connections != 8))
		return (1);
	return (0);
}

/*
** Read the file with a buffer of size 21 (one block is 16 chars of grid,
** 4 '\n's and a final '\n'). The last block (or if there's only one) should
** have 20 chars.
** Returns 0 on error, number of blocks in an input file on success.   
*/

int	read_input(int fd)
{
	char	buffer[NUM_CHARS_IN_BLOCK_WITH_NEWLINE + 1];
	int		read_result;
	int		last_read;
	int		num_of_blocks;
	
	num_of_blocks = 0;
	ft_putendl("Will be reading from fd.");
	buffer[NUM_CHARS_IN_BLOCK_WITH_NEWLINE] = '\0';
	while ((read_result = read(fd, buffer, NUM_CHARS_IN_BLOCK_WITH_NEWLINE)))
	{
		if (read_result < NUM_CHARS_IN_BLOCK)
			return (0);
		if (block_invalid(buffer))
		{
			ft_putendl("Block invalid");
			return (0);
		}
		/* save_tetri(buffer) */
		++num_of_blocks;

		last_read = read_result;
	}
	if ((last_read != NUM_CHARS_IN_BLOCK) || (num_of_blocks > MAX_NUM_BLOCKS))
	{
		/* delete list */
		return (0);
	}
	return (num_of_blocks);
}



/*
********************************
			SAVER		
********************************
*/

/*
** Shifts the coords to the upper-left (to the origin)
** Input and output:
** 		int array[8]
*/

int normalize_coords(int coords[], int min_coords[])
{

}

/*
** Gets the minimum x and y coords in an int array[8] of coords.
** Returns and int array[2]: {min_x, min_y}.
*/

int	get_min_xy(int coords[])
{
	int	min_coords[2];
	int	min_x;
	int	min_y;
	int	i;

	min_x = coords[0];
	min_y = coords[1];
	while (i < 8)
	{
		if ((i + 1) % 2 != 0)
		{
			if (coords[i] < min_x)
				min_x = coords[i];
		}
		else
		{
			if (coords[i] < min_y)
				min_y = coords[i];
		}
		++i;
	}
	min_coords[0] = min_x;
	min_coords[1] = min_y;
	return (min_coords);
}

/*
** Reads the first 18 chars of an array representing a block.
** Returns an array of 8 ints, representing [x, y] coords of '#' in a block:
** {x1, y1, x2, y2, x3, y3, x4, y4}.
*/

int		get_coords(char *block)
{
	int	x_counter;
	int	y_counter;
	int	i;
	int	coords[8];
	int	coords_ix;

	i = 0;
	x_counter = 0;
	y_counter = 0;
	coords_ix = 0;
	while (i < NUM_CHARS_IN_BLOCK - 1)
	{
		if (block[i] == '\n')
		{
			++y_counter;
			x_counter = 0;
		}
		if (block[i] == '#')
		{
			coords[coords_ix] = x_counter;
			++coords_ix;
			coords[coords_ix] = y_counter;
			++coords_ix;
		}
		++x_counter;
		++i;
	}
	return (coords);
}

int		save_tetri(char *block)
{

}