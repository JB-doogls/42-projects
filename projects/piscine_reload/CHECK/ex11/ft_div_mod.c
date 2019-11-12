/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:58:03 by edoll             #+#    #+#             */
/*   Updated: 2019/09/06 14:30:24 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf ("%d, %d", *div, *mod);

}

int		main()
{
	int a,b;
	int div, mod;
	a = 12;
	b = 9;
	ft_div_mod(a,b, &div, &mod);
	return (0);
}
