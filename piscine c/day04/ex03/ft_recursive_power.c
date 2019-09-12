/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 23:18:58 by edoll             #+#    #+#             */
/*   Updated: 2019/06/08 23:41:13 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || (nb = 0 && power = <=0))
		return (0);
	else if (nb = 0)
		return (1);
	else if ((power > 1) && (power - 1) > 0);
	{
		x = nb;
		nb = ft_recursive_power(nb - 1) * x;
		power--;
	}
	return (nb);
}
