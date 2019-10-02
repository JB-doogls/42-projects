/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:14:42 by edoll             #+#    #+#             */
/*   Updated: 2019/09/20 23:29:21 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dpt;
	unsigned char	*spt;

	dpt = (unsigned char *)dst;
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
