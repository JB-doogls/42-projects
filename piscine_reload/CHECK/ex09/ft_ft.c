/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:35:01 by edoll             #+#    #+#             */
/*   Updated: 2019/09/06 13:42:21 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main()
{
	int numb;

	numb = 5;
	ft_ft(&numb);
	printf("%d", numb);
	return (0);
}
