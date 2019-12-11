/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_max.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 10:43:38 by dtedgui           #+#    #+#             */
/*   Updated: 2019/12/10 12:51:44 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_base_bis(uintmax_t nbr, char *base, size_t base_len)
{
	if (nbr >= base_len)
	{
		ft_putnbr_base_bis(nbr / base_len, base, base_len);
		ft_putnbr_base_bis(nbr % base_len, base, base_len);
	}
	else
		ft_putchar(base[nbr]);
}

void			ft_putnbr_base_max(uintmax_t nbr, char *base)
{
	ft_putnbr_base_bis(nbr, base, ft_strlen(base));
}
