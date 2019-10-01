/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:42:10 by edoll             #+#    #+#             */
/*   Updated: 2019/09/30 21:06:52 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *frsh;

	if (!(frsh = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(frsh, size + 1);
	return (frsh);
}
