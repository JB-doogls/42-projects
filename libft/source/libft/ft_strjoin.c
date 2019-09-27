/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:36:56 by edoll             #+#    #+#             */
/*   Updated: 2019/09/27 17:26:55 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	ct;

	if (!s1 || !s2)
		return (NULL);
	ct = 0;
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
	ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
		new[ct++] = *s1++;
	while (*s2)
		new[ct++] = *s2++;
	new[ct] = '\0';
	return (new);
}
