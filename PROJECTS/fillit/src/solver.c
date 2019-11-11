/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:37:18 by edoll             #+#    #+#             */
/*   Updated: 2019/11/10 20:34:05 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
**  recursive algorithm for solving the issue
*/

static char		**ft_backtrack_algo(char **map, t_tetri *list, int map_size)
{
	int		x;
	int		y;

	y = 0;
	while (y < map_size)
	{
		x = 0;
		while (x < map_size)
		{
			if (ft_check_space_for_shape(list, map, x, y))
			{
				ft_put_shape(list, map, x, y);
				if (!list->next ||
				(list->next && ft_backtrack_algo(map, list->next, map_size)))
					return (map);
				else
					ft_del_shape(list, map, x, y);
			}
			x++;
		}
		y++;
	}
	return (NULL);
}

/*
**  function to create and increase the map for arrange the shapes
*/

static char		**ft_make_map(char ***map, int map_size)
{
	int		x;
	int		y;

	if (*map)
		ft_clear_map(map);
	if (!(*map = (char**)malloc(sizeof(char*) * (map_size + 1))))
		return (NULL);
	(*map)[map_size] = NULL;
	y = 0;
	while (y < map_size)
	{
		x = 0;
		if (!((*map)[y] = (char*)malloc(sizeof(char) * (map_size + 2))))
		{
			ft_clear_map(map);
			return (NULL);
		}
		(*map)[y][map_size + 1] = '\0';
		(*map)[y][map_size] = '\n';
		while (x < map_size)
			(*map)[y][x++] = '.';
		y++;
	}
	return (*map);
}

/*
**  algorithm control module
*/

int				ft_solving(t_tetri *list)
{
	char	**map;
	int		j;
	int		map_size;

	map = NULL;
	map_size = ft_smallest_square(list);
	if (!(map = ft_make_map(&map, map_size)))
		return (-1);
	while (!(ft_backtrack_algo(map, list, map_size)))
		if (!(map = ft_make_map(&map, ++map_size)))
			return (-1);
	j = 0;
	while (map[j])
	{
		ft_putstr(map[j]);
		free(map[j++]);
	}
	free(map);
	return (0);
}
