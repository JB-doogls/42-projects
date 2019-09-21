/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:16 by edoll             #+#    #+#             */
/*   Updated: 2019/09/20 23:21:16 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *dpt;
	unsigned char *spt;
	
	if (!dst || !src)       /* just add - check!! */
		return (NULL);
	dpt = (unsigned char*)dst;
	spt = (unsigned char*)src;
	if (spt > dpt)
		ft_memcpy(dst, src, n);
	else
	{
		while (n > 0)
		{
			dpt[n - 1] = spt[n - 1];
			n--;
		}
	}
	return (dst);
}
