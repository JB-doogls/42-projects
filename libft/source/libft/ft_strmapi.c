/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:08:15 by edoll             #+#    #+#             */
/*   Updated: 2019/09/26 19:37:51 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	ct;
	char	*new;

	if (s && f)
	{
		ct = 0;
		if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			free(new);
			return (NULL);
		}
		while (s[ct] && !((ct + 1) <= ct))
		{
			new[ct] = f(ct, (char)s[ct]);
			ct++;
		}
		new[ct] = '\0';
		return (new);
	}
	return (NULL);
}
