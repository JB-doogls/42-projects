/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:16 by edoll             #+#    #+#             */
/*   Updated: 2019/09/19 19:49:02 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *dpt;
	unsigned char *spt;

	dpt = (unsigned char*)dst;
	spt = (unsigned char*)src;

	if (spt > dpt)
		ft_memcpy(dst, src, n);
	else
	{
		while (n > 0)
		{
			dpt[n - 1] = spt[n - 1];
//			printf("process: %c\n", dpt[n - 1]);
			n--;
		}
	}
	return (dst);
}
