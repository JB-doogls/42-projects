/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:57:22 by edoll             #+#    #+#             */
/*   Updated: 2019/09/23 20:06:07 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	if (s && f)
	{
		size_t ct;
		char *new;

		ct = 0;
		if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			free(new);
			return (NULL);
		}
		while (*s && !((ct + 1) <= ct))
			new[ct++] = f((char)*s++);
		new[ct] = '\0';
		return (new);
	}
	return (NULL);
}
