/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 07:06:59 by edoll             #+#    #+#             */
/*   Updated: 2019/06/11 08:47:39 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int i; /* index source */
	int n; /* index dest */

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int		main()
{
	char dest1[] = "abc";
	char src1[] = "fogggg";
	char dest2[] = "abc";
	char src2[] = "fogggg";

	strcpy(dest1, src1);
	printf("%s\n", dest1);
	ft_strcpy(dest2, src2);
	printf("%s\n", dest2);
	return (0);
}
