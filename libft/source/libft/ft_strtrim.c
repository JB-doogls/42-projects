/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 15:06:36 by edoll             #+#    #+#             */
/*   Updated: 2019/09/27 16:15:54 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (s)
	{
		i = 0;
		while (s[i] && ft_iswspace(s[i]))
			i++;
		j = ft_strlen(&s[i]) - 1;
		while (s[i] && ft_iswspace(s[j + i]))
			j--;
		if (!(new = ft_strnew(j + 1)))
			return (NULL);
		ft_strncpy(new, (s + i), (j + 1));
		return (new);
	}
	return (NULL);
}
