/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:26:40 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (!(*s2))
		return ((char *)s1);
	while (s1[i] && n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && n - j)
			j++;
		if (!(s2[j]))
			return ((char *)(s1 + i));
		n--;
		i++;
	}
	return (NULL);
}
