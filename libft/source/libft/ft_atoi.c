/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:00:44 by edoll             #+#    #+#             */
/*   Updated: 2019/09/27 17:25:01 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *pt)
{
	long		rs;
	int			sn;

	sn = 1;
	rs = 0;
	while (*pt && (*pt == ' ' || *pt == '\n' || *pt == '\t' ||
			*pt == '\v' || *pt == '\f' || *pt == '\r'))
		pt++;
	if (*pt == '-')
		sn = -1;
	if (*pt == '-' || *pt == '+')
		pt++;
	while (*pt && *pt >= '0' && *pt <= '9')
	{
		rs = rs * 10 + (*pt - '0');
		pt++;
	}
	if ((rs * sn < 0) && sn > 0)
		return (-1);
	else if ((rs * sn > 0) && sn < 0)
		return (0);
	else
		return (rs * sn);
}
