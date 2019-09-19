/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:28:41 by edoll             #+#    #+#             */
/*   Updated: 2019/09/19 15:04:53 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (!(ptr = (char *)malloc(sizeof(*ptr) * (len + 1))))
		return (NULL);
	len = 0;
	while (src[len])
	{
		ptr[len] = src[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
