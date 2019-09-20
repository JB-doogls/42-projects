/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:18:17 by edoll             #+#    #+#             */
/*   Updated: 2019/09/20 23:19:18 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_pt;

	s_pt = (unsigned char*)s;
	if (!s_pt)
		return (NULL);
	while (n)
	{
		if (*s_pt == (unsigned char)c)
			return ((void*)s_pt);
		*s_pt++;
		n--;
	}
	return (NULL);
}
