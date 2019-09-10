/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:51:25 by edoll             #+#    #+#             */
/*   Updated: 2019/06/11 22:52:32 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	int i;
		
	i = 0;
	while (scr[i] != '\0' && i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main()
{
		char dest1[12] = "abccff";
		char src1[12] = "123";
		char dest2[] = "abccff";
		char src2[] = "123";
		
		strncpy(dest1, src1,10);
		printf("%s\n", dest1);
		ft_strncpy(dest2, src2,10);
		printf("%s\n", dest2);
		return (0);
}
