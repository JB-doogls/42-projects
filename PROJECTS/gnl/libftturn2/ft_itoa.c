/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:43:15 by edoll             #+#    #+#             */
/*   Updated: 2019/10/01 19:18:12 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		ln;
	char	*rs;
	long	sn;
	int		i;
	long	nb;

	nb = n;
	ln = 1;
	if ((sn = nb) < 0)
		nb = -nb;
	while (ft_long_power(10, ln) < nb)
		ln++;
	if (!(rs = (char *)malloc(sizeof(char) * (ln + 1))))
		return (NULL);
	i = 1;
	rs[0] = (nb % 10) + '0';
	while ((nb = nb / 10) > 0)
		rs[i++] = (nb % 10) + '0';
	if (sn < 0)
		rs[i++] = '-';
	rs[i] = '\0';
	return (ft_strrev(rs));
}
