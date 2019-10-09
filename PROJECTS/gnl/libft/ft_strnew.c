/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:42:10 by edoll             #+#    #+#             */
/*   Updated: 2019/10/09 12:50:34 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *frsh;

	if (size + 1 <= size)
		return (NULL);
	if (!(frsh = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(frsh, size + 1);
	return (frsh);
}
