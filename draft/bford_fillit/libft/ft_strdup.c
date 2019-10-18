/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:47:22 by bford             #+#    #+#             */
/*   Updated: 2019/10/18 09:22:11 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*s;
	int		len;

	len = ft_strlen(src);
	if ((s = (char *)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (*src)
		*s++ = *src++;
	*s = '\0';
	s -= len;
	return (s);
}
