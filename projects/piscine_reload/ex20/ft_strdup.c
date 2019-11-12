/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:17:30 by edoll             #+#    #+#             */
/*   Updated: 2019/09/08 15:32:07 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = 0;
	while (src[len])
		len++;
	if (!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
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
