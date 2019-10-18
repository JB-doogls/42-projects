/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:52:30 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	unsigned long long int	n;
	int						sign;

	sign = 1;
	n = 0;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s == '+' || *s == '-')
		sign *= (*s++ == '-' ? -1 : 1);
	while (ft_isdigit(*s))
		n = n * 10 + (*s++) - 48;
	if (n > 9223372036854775807)
		return (sign == 1 ? -1 : 0);
	return (sign * n);
}
