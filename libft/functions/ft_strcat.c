/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:53:53 by edoll             #+#    #+#             */
/*   Updated: 2019/09/12 00:12:08 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dst, const char *restrict s2)
{
	size_t pos;

	pos = ft_strlen(dst);
	while (s2)
		dst[pos++] = *s2++;
	dst[pos] = '\0';
	return (dst);
}


/*
	pos = ft_strlen(s1);
	pos2 = ft_strlen(s2);
	while (*s2)
		s1[pos++] = *s2++;
	s1[pos] = '\0';
	return (s1);

*/

