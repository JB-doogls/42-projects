/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_bzero_debug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:11:53 by edoll             #+#    #+#             */
/*   Updated: 2019/09/10 19:12:04 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    unsigned char *p1;
    size_t count;

    count = n;
    ptr = (unsigned char*)s;
    printf("source string: %s\n", ptr);
    p1 = ptr;
    while (n--)
    {
	*ptr++ = 0;
//	ptr = p1;
//	*p1--;
    }
    while (count--)
	p1--;
	printf("bzero string: %s\n", p1);

}
