/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:24:44 by edoll             #+#    #+#             */
/*   Updated: 2019/09/21 20:34:37 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt1;
	unsigned char	*pt2;
	size_t			ct;

	ct = 0;
	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (ct < n)
	{
		if (pt1[ct] != pt2[ct])
			return (pt1[ct] - pt2[ct]);
		ct++;
	}
	return (0);
}
