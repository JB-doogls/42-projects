/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:18:17 by edoll             #+#    #+#             */
/*   Updated: 2019/09/22 20:20:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_pt;

	s_pt = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*(s_pt++) == (unsigned char)c)
			return ((void*)s_pt - 1);
	}
	return (0);
}
