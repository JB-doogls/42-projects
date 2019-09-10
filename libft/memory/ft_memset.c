/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:11:37 by edoll             #+#    #+#             */
/*   Updated: 2019/09/09 16:47:21 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char *ptr;

	ptr =  (unsigned char*)dest;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (dest);
}
