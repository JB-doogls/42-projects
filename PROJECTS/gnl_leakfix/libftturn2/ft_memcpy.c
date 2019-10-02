/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:09 by edoll             #+#    #+#             */
/*   Updated: 2019/10/01 20:34:56 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dpt;
	unsigned char *spt;

	if (!dst && !src)
		return (NULL);
	dpt = (unsigned char*)dst;
	spt = (unsigned char*)src;
	while (n--)
		*dpt++ = *spt++;
	return (dst);
}
