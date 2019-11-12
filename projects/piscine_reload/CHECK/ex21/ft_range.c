/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:18:45 by edoll             #+#    #+#             */
/*   Updated: 2019/09/09 14:07:07 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
	{	
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include <stdio.h>

int		main()
{
	int *a;
	int i;
	a = ft_range(-10, -5);
	i = 0;
	while (i < 5)
	{	printf("%d\n", a[i]);
	i++;}
	return (0);
}
