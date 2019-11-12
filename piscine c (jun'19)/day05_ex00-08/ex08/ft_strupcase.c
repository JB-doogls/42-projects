/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 23:14:15 by edoll             #+#    #+#             */
/*   Updated: 2019/06/11 23:41:22 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			int x;
			x = i;
			i = x - 32;
			str[i] = str [i];
			i++;
		}
		else
			i++;
	}
	return (str);
}

int		main()
{
	char dest1[] = "abdgsFSD- 4224 GDFGgc";
	char *ptr;
	ptr = ft_strupcase(dest1);
	printf("%c\n", *ptr);
	return (0);
}
