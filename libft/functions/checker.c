/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:10:43 by edoll             #+#    #+#             */
/*   Updated: 2019/09/11 18:45:33 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

int		main()
{

   // FT_MEMSET //
/*
    char str[17] = "abcdefghijklmnop";

    printf("source string: %s\n", str);
    printf("memset string: %s\n", ft_memset(str, '1', 5));


//-------------------------------------------------------------------------//
   // FT_BZERO //

    char str[11] = "abcdefghij";
    ft_bzero(str, 5);


//-------------------------------------------------------------------------//
    // FT_MEMCPY //

    char src[0]; //= "abcef";
    char dest[6];

    printf("src: %s\n", src);
    printf("dest: %s\n", ft_memcpy(dest, src, 6));


//-------------------------------------------------------------------------//


    // FT_MEMCCPY //

    char src[14] = "abc3 2abc 465";
    char dest[5];

    printf("src: %s\n", src);
    printf("dest: %s\n", ft_memccpy(dest, src, '4', 11));/


//-------------------------------------------------------------------------//

	// FT_STRLEN //

	char str[5] = "a1b8";
	printf("strlen: %lu\n", strlen(str));
	printf("ft_strlen: %zu\n", ft_strlen(str));

*/

//-------------------------------------------------------------------------//

	// FT_STRDUP //	FT_STRCPY //

	const char src[8] = "ab 1fgd";
	char dest[8];

	//dest = ft_strdup(src);
	printf("dest : %s\n", ft_strcpy(dest, src));
	printf("src : %s\n", src);


//-------------------------------------------------------------------------//



//-------------------------------------------------------------------------//


//-------------------------------------------------------------------------//
    return (0);
}
