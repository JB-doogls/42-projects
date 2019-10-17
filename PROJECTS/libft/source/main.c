
#include "libft.h"
#include <stdio.h>

int 	main()
{
	char *data = "hello, i'm a data";
	t_list *test;

	test = ft_lstnew(data, 8);
	printf("ft_lstnew: %s\n", test->content);
	printf("test->content len: %zu\n\n", ft_strlen(test->content));
	printf("data: %s\n", data);
	printf("size: %zu\n", test->content_size);

	return (0);
}