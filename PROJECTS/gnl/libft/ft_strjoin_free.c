/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:48:13 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/10/18 11:25:51 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char const *s2)
{
	char	*new;
	char	*tmp_new;
    char  	*tmp_s1;

	if (!s1 || !s2 || !(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	tmp_new = new;
	tmp_s1 = s1;
	while (*s1)
		*new++ = *s1++;
	free(tmp_s1);
	while (*s2)
		*new++ = *s2++;
	return (tmp_new);
}
