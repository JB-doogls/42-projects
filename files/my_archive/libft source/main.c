
#include "libft.h"
#include <stdio.h>


// int		main()
// {
// 	int n = -8;
// 	char *rs;

// 	rs = ft_itoa(n);
// 	printf("num in string: %s\n", rs);
// 	return (0);
// }

// char	*ft_itoa(int n)
// {
// 	int		ln;
// 	char	*rs;
// 	long	sn;
// 	int		i;
// 	long	nb;

// 	nb = (long)n;
// 	ln = 1;
// 	if ((sn = nb) < 0)
// 		nb = -nb;
// 	while (ft_long_power(10, ln) < nb)
// 		ln++;
// 	if (!(rs = (char *)malloc(sizeof(char) * (ln + 1))))
// 		return (NULL);
// 	i = 1;
// 	rs[0] = (nb % 10) + '0';
// 	printf("digit in proc: %c\n", rs[0]);
// 	while ((nb = nb / 10) > 0)
// 	{
		
// 		rs[i++] = (nb % 10) + '0';
// 		printf("i proce: %d\n", i);
// 		printf("digit in proc: %c\n", rs[i-1]);
// 	}
// 	printf("i after: %d\n", i);
// 	if (sn < 0)
// 	{
// 		rs[i++] = '-';
// 		printf("i if -: %d\n", i);
// 	}
// 	printf("digit rs[0]: %c\n", rs[i-i]);
// 	printf("digit rs[1]: %c\n", rs[i - i + 1]);	
// 	printf("digit rs[2]: %c\n", rs[i - i + 2]);
// 	printf("digit rs[3]: %c\n", rs[i - i + 3]);
// 	printf("digit rs[4]: %c\n", rs[i - i + 4]);
// 	// printf("digit before 0: %c\n", rs[i]);	

// 	printf("i before 0: %d\n", i);
// 	rs[i] = '\0';
// 	if (rs[i] == '\0' && rs[i-1] != '\0')
// 		printf("%s%d%s\n","rs[", i,"] terminated ok");
// 	return (ft_strrev(rs));
// }


// int 	main()
// {
// 	char *data = "hello, i'm a data";
// 	t_list *test;

// 	test = ft_lstnew(data, 8);
// 	printf("ft_lstnew: %s\n", test->content);
// 	printf("test->content len: %zu\n\n", ft_strlen(test->content));
// 	printf("data: %s\n", data);
// 	printf("size: %zu\n", test->content_size);

// 	return (0);
// }
