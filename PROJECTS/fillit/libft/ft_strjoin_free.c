/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:48:13 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/11/02 04:46:47 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char const *s2)
{
	char *new;
	char *tmp_s1;
	char *ptr_n;
	
	if (!s1 || !s2 || !(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ptr_n = new;
	tmp_s1 = s1;
	while (*s1)
		*new++ = *s1++;
	free(tmp_s1);
	while (*s2)
		*new++ = *s2++;
	return (ptr_n);
}
