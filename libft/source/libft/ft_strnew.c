/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:42:10 by edoll             #+#    #+#             */
/*   Updated: 2019/09/22 02:32:08 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char *frsh;

	if (size + 1 <= size)
		return (NULL);
	if (!(frsh = (unsigned char*)ft_memalloc(size)))
		return (NULL);
	ft_bzero(frsh, size);
	frsh[size + 1] = '\0';
	return ((char *)frsh);
}
