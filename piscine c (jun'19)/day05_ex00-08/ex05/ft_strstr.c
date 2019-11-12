/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:57:11 by edoll             #+#    #+#             */
/*   Updated: 2019/06/11 17:39:58 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}


int		main()
{
	char str1[8] = "45678";
	char str2[10] = "456";

	char  *ptr;
	char *ptr22;

	ptr = strstr(str1, str2);
	ptr22 = ft_strstr(str1, str2);

	printf ("%d\n", *ptr - '0');
	printf ("%d\n", *ptr22 - '0');
	return (0);
}
