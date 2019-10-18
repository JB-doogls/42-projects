
#include "get_next_line.h"
#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int fd;
	int ret;
	int line_count = 0;
	char *buff;
	int	i = 1;
	int ac = 0;

	if ((ac = argc) > 1)
	{
		while (ac-- > 1)
		{
		fd = open(argv[i], O_RDONLY);
		while ((ret = get_next_line(fd, &buff)) > 0)
		{
			printf("[Return: %d] Line #%d: %s\n", ret, ++line_count, buff);
			free(buff);
		}
		printf("[Return: %d] Line #%d: %s\n", ret, ++line_count, buff);
		free(buff);
		if (ret == -1)
			printf("-----------\nError\n");
		else if (ret == 0)
			printf("-----------\nEnd of file\n");
		close(fd);
		i++;
		}
	}
	if (argc == 1)
	{
		while ((ret = get_next_line(0, &buff)) > 0)
			printf("[Return: %d] Line #%d: %s\n", ret, ++line_count, buff);
		if (ret == -1)
			printf("-----------\nError\n");
		else if (ret == 0)
			printf("-----------\nEnd of stdin\n");
		close(fd);
	}
	return (0);
}



// int main(int ac, char **av)
// {
// 	int i = 1;
	
// 	char *line = NULL;
// 	while (ac-- > 1)
// 	{
// 		int fd = open(av[i], O_RDONLY);
// 		int ret;
// 		while ((ret = get_next_line(fd, &line)))
// 		{
// 			if (ret == -1)
// 			{
// 				printf("error main");
// 				return (0);
// 			}
// 			printf("{ 1 } ret: %d\n", ret);
// 			printf("{ 1 }");
// 			printf("%s\n", line);
// 			if (line)
// 			{
// 				free(line);
// 				line = NULL;
// 			}
// 		}
// 		printf("{ 2 } ret: %d\n", ret);
// 		printf("{ 2 }");
// 		printf("%s\n", line);
// 		if (line)
// 		{
// 			free(line);
// 			line = NULL;
// 		}
// 		close(fd);
// 		i++;
// 	}
// 	return (1);
// }
