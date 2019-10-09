/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:48:13 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/10/02 16:04:07 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*new;
	size_t	ct;
    size_t  i;

	if (!s1 || !s2)
		return (NULL);
	ct = 0;
    i = 0;
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
	ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i])
		new[ct++] = s1[i++];
    ft_memdel((void**)&s1);
    i = 0;
	while (s2[i])
		new[ct++] = s2[i++];
	new[ct] = '\0';
	return (new);
}
