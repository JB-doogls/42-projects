/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:41:21 by edoll             #+#    #+#             */
/*   Updated: 2019/09/21 17:53:47 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t ln)
{
	size_t ct;

	ct = 0;
	while ((ct < ln) && src[ct])
	{
		dst[ct] = src[ct];
		ct++;
	}
	while (ct < ln)
		dst[ct++] = '\0';
	return (dst);
}
