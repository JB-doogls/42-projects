/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:08:53 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 19:43:49 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int					ft_min_square(t_fil *lst)
{
	int	min;
	int	x;

	x = 0;
	min = 4;
	while (lst->next)
	{
		lst = lst->next;
		min += 4;
	}
	while (x * x < min)
		x++;
	return (x);
}
