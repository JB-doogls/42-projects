/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:10:43 by edoll             #+#    #+#             */
/*   Updated: 2019/09/19 19:48:46 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}
*/

int		main()
{
/*
   // FT_MEMSET //

    char str[] = "ab";
	char str2[] = "ab";

    printf("orig_str: %s\n", str);
	printf("memset: %s\n", memset(str2, '1', 2));
    printf("ft_memset: %s\n", ft_memset(str, '1', 2));


//-------------------------------------------------------------------------//
   // FT_BZERO //

    char str[] = "abcde";
    ft_bzero(str, 3);
*/

//-------------------------------------------------------------------------//
    // FT_MEMCPY //
/*
    char src[6] = "12345";
    char dst[2] = "";
//	char src1[] = "12345";
//	char dst1[] = "";

//    printf("memcpy: %s\n", memcpy(dst1, src1, '5'));
    printf("ft_memcpy: %s\n", ft_memcpy(dst, src, 3));

*/
//-------------------------------------------------------------------------//

/*
    // FT_MEMCCPY // FT_MEMMOVE

    char dst[6] = "";
    char src[7] = "1234567";
	char dst1[6] = "";
    char src1[7] = "1234567";

    printf("ft_memmove: %s\n", ft_memmove(dst, src, 6));
	printf("memmove: %s\n", memmove(dst1, src1, 6));
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
/*

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


*/
//-------------------------------------------------------------------------//

	// FT_ATOI

	char s[] = "−9223372036854775028";		//" \n\v\t\r=\f 2+a34";
	printf ("libc: %d\n", atoi(s));
	printf ("ft: %d\n", ft_atoi(s));

/*								long int min = -9 223 372 036 854 775 808  max =  9 223 372 036 854 775 807
"9 223 372 036 854 775 828" 
"9 223 372 036 854 775 808"

"−9 223 372 036 854 775 828" 
"−9 223 372 036 854 775 028"


*/

//-------------------------------------------------------------------------//
    return(0);
}
