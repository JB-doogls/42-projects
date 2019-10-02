
#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
//	(void)ac;
	int i = 1;
	int k = ac;
	
	while (k > 1)
	{
		char *line = NULL;
		int fd = open(av[i], O_RDONLY);

		int ret;
		while ((ret = get_next_line(fd, &line)))
		{
			if (ret == -1)
			{
				printf("error main");
			//	return (0);
			}
			printf("%s\n", line);
		}
		close (fd);
		k--;
		i++;
		}
}

// 	fd = open(av[2], O_RDONLY);
// 	int ret1 = 

// fd = open(av[2], O_RDONLY);
// 	int ret1

