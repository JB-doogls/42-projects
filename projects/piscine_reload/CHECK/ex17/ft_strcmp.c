/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:15:11 by edoll             #+#    #+#             */
/*   Updated: 2019/09/08 12:26:17 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;	
	}
	return (0);
}

int		main()
{
	char *s1 = "ab";
	char *s2 = "ac";
	printf ("%d\n", strcmp (s1, s2));
	printf ("%d", ft_strcmp(s1, s2));
	return (0);
}
