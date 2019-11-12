/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:41:57 by edoll             #+#    #+#             */
/*   Updated: 2019/06/18 18:59:46 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sign;

	i = 1;
	sign = 0;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0 && sign <= 0)
			sign = -1;
		else if (f(tab[i - 1], tab[i]) > 0 && sign >= 0)
			sign = 1;
		else if (f(tab[i - 1], tab[i]) > 0 && sign < 0)
			return (0);
		else if (f(tab[i - 1], tab[i]) < 0 && sign > 0)
			return (0);
		i++;
	}
	return (1);
}
