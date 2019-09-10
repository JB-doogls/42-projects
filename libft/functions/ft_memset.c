/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:35 by edoll             #+#    #+#             */
/*   Updated: 2019/09/10 19:22:37 by edoll            ###   ########.fr       */
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
