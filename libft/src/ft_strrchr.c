/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:07:04 by edoll             #+#    #+#             */
/*   Updated: 2019/09/20 22:54:13 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == (char)c)
			return ((char*)&s[i - (j - 1)]);
	return (NULL);
}