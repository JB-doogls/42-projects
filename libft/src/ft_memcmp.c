/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:24:44 by edoll             #+#    #+#             */
/*   Updated: 2019/09/20 22:52:54 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s_pt1;
	unsigned char *s_pt2;

	s_pt1 = (unsigned char *)s1;
	s_pt2 = (unsigned char *)s2;
	if (!s_pt1)
		return (0);
	else
		return (ft_strncmp((char*)s_pt1, (char*)s_pt2, n));
}