/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:16 by edoll             #+#    #+#             */
/*   Updated: 2019/10/17 20:34:37 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	ct;

	ct = 0;
	if (dst < src)
		while (ct < n)
		{
			((unsigned char *)dst)[ct] = ((unsigned char *)src)[ct];
			ct++;
		}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
