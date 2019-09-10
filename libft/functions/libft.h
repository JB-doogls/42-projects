/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:22:48 by edoll             #+#    #+#             */
/*   Updated: 2019/09/10 20:15:39 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>	    // FOR PRINTF - DELETE before push! //

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
 //ft_memchr
 //ft_memcmp
size_t	ft_strlen(const char *str);

#endif
