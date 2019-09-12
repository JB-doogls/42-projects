/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 22:35:16 by edoll             #+#    #+#             */
/*   Updated: 2019/06/08 23:14:38 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if (power < 0 || (nb = 0 && power = <=0))
		return (0);
	else if (nb = 0)
		return (1);
	else if (power > 1)
	{
		int x;

		x = nb;
		while (power -1 > 0)
		{
			nb = x * nb;
			power--;
		}
	}
	return (nb);
}
