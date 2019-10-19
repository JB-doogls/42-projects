/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_power.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 19:00:09 by edoll             #+#    #+#             */
/*   Updated: 2019/09/26 19:18:41 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_long_power(long n, long power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (n * ft_power(n, power - 1));
}
