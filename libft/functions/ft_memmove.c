/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:16 by edoll             #+#    #+#             */
/*   Updated: 2019/09/10 19:22:26 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *destptr;
    unsigned char *srcptr;
    unsigned char *tmp;
    
    destptr = (unsigned char*)dest;
    srcptr = (unsigned char*)src;
    if (!dest || !src || dst == src || n == 0)
	return (NULL);
    if (!(tmp = (unsigned char*)malloc(sizeof(*tmp) * n)))
	return (NULL);
    ft_memcpy(tmp, srcptr, n);
    ft_memcpy(dstptr, tmp, n);
    free(tmp);
    return(destptr);
}
