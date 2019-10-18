/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:47:22 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
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
