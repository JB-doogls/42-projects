/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:53:53 by edoll             #+#    #+#             */
/*   Updated: 2019/09/12 00:12:08 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dst, const char *restrict s2)
{
	size_t ln;
	size_t ct;

	ln = ft_strlen(dst);
	ct = 0;;
	while (s2[ct])
	{
	    dst[ln + ct] = s2[ct];
	    ct++;
	}
	dst[ln + ct] = '\0';
	return (dst);
}
