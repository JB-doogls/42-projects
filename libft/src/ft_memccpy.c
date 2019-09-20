/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:14:42 by edoll             #+#    #+#             */
/*   Updated: 2019/09/19 19:07:15 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *dpt;
    unsigned char *spt;
    int i;

    dpt = (unsigned char*)dst;
    spt = (unsigned char*)src;
    i = 0;
    while (n--)
	{
		dpt[i] = spt[i];
		if (dpt[i] == (unsigned char)c)
			return ((void*)&dst[i + 1]);
		i++;
	}
	return (NULL);
}
