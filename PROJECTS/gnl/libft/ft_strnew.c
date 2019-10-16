/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:42:10 by edoll             #+#    #+#             */
/*   Updated: 2019/09/23 21:19:29 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *frsh;

	if (size + 1 <= size)
		return (NULL);
	if (!(frsh = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(frsh, size + 1);
	return (frsh);
}
