/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:32:44 by edoll             #+#    #+#             */
/*   Updated: 2019/09/06 15:03:00 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

int		main()
{
	int a = 0;
	int b;
	b = ft_iterative_factorial(a);
	printf ("%d", b);
	return (0);
}
