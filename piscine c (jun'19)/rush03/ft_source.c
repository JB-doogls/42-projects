
/* Все функции надо прототипировать в хэдере! */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	char *ret;

	ret = dest;
	while (*src != '\0')
		*ret++ = *src++;
	*ret = *src;
	return (dest);
}

