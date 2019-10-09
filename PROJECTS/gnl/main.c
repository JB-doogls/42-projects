
#include "get_next_line.h"
#include <stdio.h>
#include <inttypes.h>

int main(int ac, char **av)
{
//	(void)ac;
	int i = 1;
	
	char *line = NULL;
	while (ac-- > 1)
	{
		int fd = open(av[i], O_RDONLY);
		int ret;
		while ((ret = get_next_line(fd, &line)))
		{
			if (ret == -1)
			{
				printf("error main");
			//	return (0);
			}
												printf("%s\n", line);				/* hide it to stop output */
			if (line)
			{
				free(line);
				line = NULL;
			}
		}
		if (line)
		{
			free(line);
			line = NULL;
		}
		close(fd);
		i++;
	}
	return (1);
}

// 	fd = open(av[2], O_RDONLY);
// 	int ret1 = 

// fd = open(av[2], O_RDONLY);
// 	int ret1

