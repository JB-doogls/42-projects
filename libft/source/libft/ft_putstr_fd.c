/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:18:32 by marvin            #+#    #+#             */
/*   Updated: 2019/09/22 20:20:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t ct;

	ct = 0;
	if (!s[ct])
		write(1, "(NULL)", 6);
	else
		while (s[ct])
		{
			ft_putchar_fd(s[ct], fd);
			ct++;
		}
}
