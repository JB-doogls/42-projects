/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:10:43 by edoll             #+#    #+#             */
/*   Updated: 2019/09/10 20:26:10 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int		main()
{
   
   // FT_MEMSET //

//    char str[17] = "abcdefghijklmnop";

//    printf("source string: %s\n", str);
//    printf("memset string: %s\n", ft_memset(str, '1', 5));

   
//-------------------------------------------------------------------------//
   // FT_BZERO //

//    char str[11] = "abcdefghij";
//    ft_bzero(str, 5);


//-------------------------------------------------------------------------//
    // FT_MEMCPY //

//    char src[0]; //= "abcef";
//    char dest[6];

//    printf("src: %s\n", src);
//    printf("dest: %s\n", ft_memcpy(dest, src, 6));

//-------------------------------------------------------------------------//



    // FT_MEMCCPY //

//    char src[14] = "abc3 2abc 465";
//    char dest[5];

//    printf("src: %s\n", src);
//    printf("dest: %s\n", ft_memccpy(dest, src, '4', 11));/

//-------------------------------------------------------------------------//

	// FT_STRLEN //
	
	char str[5] = "a1b8";
	printf("strlen: %lu\n", strlen(str)); 
	printf("ft_strlen: %zu\n", ft_strlen(str)); 


    return (0);
}
