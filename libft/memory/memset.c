/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:11:37 by edoll             #+#    #+#             */
/*   Updated: 2019/09/09 16:47:21 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char 	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char *ptr;

	ptr = dest;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (dest);
}
