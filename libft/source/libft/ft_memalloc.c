/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 02:43:50 by edoll             #+#    #+#             */
/*   Updated: 2019/09/23 17:25:58 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (size + 1 <= size)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
	{
		free(str);
		return (NULL);
	}
	ft_memset(str, 0, size);
	return (str);
}
