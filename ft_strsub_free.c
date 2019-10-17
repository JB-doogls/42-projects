/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 22:10:24 by edoll             #+#    #+#             */
/*   Updated: 2019/10/01 22:22:33 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_free(char const *s, unsigned int start, size_t len)
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
		free((void*)s);
		s = NULL;
		return (sub);
	}
	return (NULL);
}
