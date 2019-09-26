/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:36:56 by edoll             #+#    #+#             */
/*   Updated: 2019/09/26 15:04:17 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (*s1 && *s2)
	{
		char *new;
		size_t ct;
		size_t i;

		ct = 0;
		i = 0;
		if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		{
			free(new);
			return (NULL);
		}
		while (s1[i])
			new[ct++] = s1[i++];
		i = 0;
		while (s2[i])
			new[ct++] = s2[i++];
		new[ct] = '\0';
		return (new);
	}
	return (NULL);
}