/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:10:43 by edoll             #+#    #+#             */
/*   Updated: 2019/09/12 00:13:17 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
*/

//-------------------------------------------------------------------------//

	// FT_STRLEN //
/*
	char str[5] = "a1b8";
	printf("strlen: %lu\n", strlen(str));
	printf("ft_strlen: %zu\n", ft_strlen(str));
*/


//-------------------------------------------------------------------------//

	// FT_STRDUP //	FT_STRCPY // FT_STRNCPY // FT_STRCAT //
/*
	char s2[4] = "abc";
	char s1[7] = "x1y2z3";				// s1 - onstack string 
*/
/*
// ft_strcat 
	
//	char s1[6] = "abcde";
//	char s2[4] = "xyz";
	char s11[6] = "abcde";
	char s22[4] = "xyz";
//	size_t l;

//	l = ft_strlen(s1);

	printf("s1 orig : %s\n", s11);
	//	printf("strlen s1 : %lu\n", strlen(s1));

//	printf("ft_strlen(l) s1  : %zu\n", l);
	//	printf("ft_strlen s1  : %zu\n", ft_strlen(s1));
	
	//	printf("ft_strcat dest : %s\n", ft_strcat(s1, s2));
	printf("strcat dest: %s\n", strlcat(s11, s22, 4));
*/

/*
// ft_strdup
	dest = ft_strdup(src);
	printf("dest : %s\n", ft_strcpy(dest, src));	

// ft_strncpy
	char *ptr;
	size_t n =5;
	ptr = ft_strncpy(dest, src, n);
	printf("dest_len : %zu\n", strlen(ptr));
	printf("my dest : %s\n", ft_strncpy(dest, src, n));
	printf("lib dest: %s\n", strncpy(dest, src, n));
	printf("src : %s\n", src);	
*/

//-------------------------------------------------------------------------//

	// FT_STRCHR // FT_STRSTR // FT_STRCMP

	char str[] = "176";
	char str2[] = "387";
//	char *ptr;
//	char *ptr1;

//	ptr = ft_strnstr(str, str2, 3);
//	ptr1 = strchr(str, 3);
//	if (ptr == NULL)
//		printf("no occure\n");
//	else
	
		printf("libc: %d\n", strcmp(str, str2));
		printf("ft: %d\n", ft_strcmp(str, str2));


//-------------------------------------------------------------------------//


//-------------------------------------------------------------------------//
    return(0);
}
