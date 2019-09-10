#include <stdio.h>		/* ИНКЛЮДЫ НАДО УТАЩИТЬ В ХЕДЕР, И ПРОТОТИПЫ ТОЖЕ */ 
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_MAX 1024

int 	ft_countx(char *str)		/*Прототипировать в хэдере */
{
	int x;

	x = 0;
	while (str[x] != '\n')
		x++;
	return(x);
}

int     ft_county(char *str)		/*Прототипировать в хэдере */

{
	int y;
	int len;

	y = 0;
	len = 0;
	while (str[len] != '\0')
	{	
		while (str[len] != '\n')
 			len++;	
		y++;
		len++;
	}
	return(y);
}

int		ft_strcmpb  		/*не помню зачем это было... кажется оно не нужно :) */

int		main()
{
	char buf[BUF_MAX];
	size_t buf_size;
	char *compare;
	int x;
	int y;

	while ((buf_size = read(0, &buf, BUF_MAX)) > 0)
		write(1, buf, buf_size);
	compare = (char *)malloc(buf_size);
	compare = ft_strcpy(compare, buf);
	ft_putstr(compare);
	x = ft_countx(compare);
	y = ft_county(compare);
	printf("x = %d\ny = %d\n", x, y);	/*Вывожу значения x, y - для проверки 
						(к пушузадания не надо выводить */
	 
	
	//ft_putstr("aucune\n");
	//ft_putstr("Success\n");
	return (0);
}
