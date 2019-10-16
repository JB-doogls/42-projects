/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:05:41 by edoll             #+#    #+#             */
/*   Updated: 2019/09/21 16:52:34 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t ct;

	ct = 0;
	if ((!s1[ct] && !s2[ct]) || n == 0)
		return (0);
	while (s1[ct] && s2[ct] && s1[ct] == s2[ct] && ct < n - 1)
		ct++;
	return ((unsigned char)s1[ct] - (unsigned char)s2[ct]);
}
