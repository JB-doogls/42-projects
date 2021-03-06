/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:54:26 by edoll             #+#    #+#             */
/*   Updated: 2019/06/08 22:24:12 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int p;

	if (nb == 0 || nb == 1)
		return (0);
	else if (nb < 0 && nb > 13)
		return (1);
	else if (nb > 1)
	{
		i = 1;
		while (i <= nb)
		{
			p *= p * 1;
			i++;
		}
	}
	return (p);
}
