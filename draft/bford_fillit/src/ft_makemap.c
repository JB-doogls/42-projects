/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makemap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:23:57 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 10:18:15 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	**ft_makemap(int z, char ***map)
{
	int		y;
	int		x;

	if (*map)
		ft_clear_map(map);
	y = 0;
	if (!(*map = (char **)malloc(sizeof(char *) * (z + 1))))
		return (NULL);
	(*map)[z] = NULL;
	while (y < z)
	{
		x = 0;
		if (!((*map)[y] = (char *)malloc(sizeof(char) * (z + 2))))
		{
			ft_clear_map(map);
			return (NULL);
		}
		(*map)[y][z + 1] = '\0';
		(*map)[y][z] = '\n';
		while (x < z)
			(*map)[y][x++] = '.';
		y++;
	}
	return (*map);
}
