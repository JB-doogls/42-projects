/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:05:05 by marvin            #+#    #+#             */
/*   Updated: 2019/10/01 19:28:01 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if ((long)n <= -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n >= 0)
	{
		if (n >= 10)
			ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((-n), fd);
	}
}
