/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:54:05 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fresh;
	char *copy;

	if (!s1 || !s2 || !(fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	copy = fresh;
	while (*s1)
		*fresh++ = *s1++;
	while (*s2)
		*fresh++ = *s2++;
	return (copy);
}
