
#include "get_next_line.h"
#include <stdio.h>
#include <inttypes.h>

int main(int ac, char **av)
{
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
				return (0);
			}
			printf("{ 1 }");
			printf("%s\n", line);
			if (line)
			{
				free(line);
				line = NULL;
			}
		}
		printf("{ 2 }");
		printf("%s\n", line);
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
