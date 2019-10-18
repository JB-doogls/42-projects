/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 02:43:50 by edoll             #+#    #+#             */
/*   Updated: 2019/10/17 21:58:36 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (size + 1 <= size)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(str, '\0', size);
	return (str);
}





// void	*ft_memalloc(size_t size)
// {
// 	size_t	ct;
// 	void	*str;

// 	ct = 0;
// 	if (!(str = (void *)malloc(sizeof(void) * size)))
// 		return (NULL);
	
// 	while (ct < size)
// 		((unsigned char *)str)[ct++] = '\0';
// 	return (str);
// }
