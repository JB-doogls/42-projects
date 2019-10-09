/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:04:33 by edoll             #+#    #+#             */
/*   Updated: 2019/09/21 20:34:34 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t ln;
	size_t ct;

	ct = 0;
	ln = ft_strlen(s);
	while (ct <= ln)
	{
		if (s[ct] == (char)c)
			return ((char *)&s[ct]);
		ct++;
	}
	if (s[ct - 1] == (char)c)
		return ((char *)&s[ct - 1]);
	else
		return (NULL);
}
