/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:41:21 by edoll             #+#    #+#             */
/*   Updated: 2019/09/11 21:51:21 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char *dest_ptr;

	dest_ptr = dest;
	while (*src && len-- != 0)
		*dest_ptr++ = *src++;
	*dest_ptr = '\0';
	while (len-- != 0)
		*dest_ptr++ = '\0';
	return (dest);
}
