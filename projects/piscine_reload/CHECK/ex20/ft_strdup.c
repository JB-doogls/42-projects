/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:17:30 by edoll             #+#    #+#             */
/*   Updated: 2019/09/08 15:13:07 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

char	*ft_strdup(char *src)
{
	int len;
	char *ptr;

	len = 0;
	while (src[len])
		len++;
	if (!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
		return (NULL);
	len = 0;
	while (src[len])
	{
		ptr[len] = src[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}

int		main()
{
	char *str = "abcde";
	char *str2;
	str2 = &(*ft_strdup(str));
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putstr(str);
	//	printf("%c", *str);
	return (0);
}
