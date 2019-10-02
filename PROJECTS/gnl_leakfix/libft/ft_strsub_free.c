/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 22:10:24 by edoll             #+#    #+#             */
/*   Updated: 2019/10/02 16:04:09 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_free(char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ct;

	if (s)
	{
		ct = 0;
		if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (s[start] && len--)
			sub[ct++] = s[start++];
		sub[ct] = '\0';
		ft_memdel((void**)&s);
		return (sub);
	}
	return (NULL);
}
