/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:52:58 by edoll             #+#    #+#             */
/*   Updated: 2019/09/23 21:19:24 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	if (s) // && s[start] && (ft_strlen(s) == len))
	{
		char *sub;
		size_t ct;

		ct = 0;
		if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		{
			free(sub);
			return (NULL);
		}
		while (s[start] && len--)
			sub[ct++] = s[start++];
		sub[ct] = '\0';
		return (sub);
	}
	return (NULL);
}