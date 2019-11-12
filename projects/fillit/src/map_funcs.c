/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:35:22 by edoll             #+#    #+#             */
/*   Updated: 2019/11/10 20:32:01 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
**  check the map in current specific point (x,y)
**	for possibility to put the shape following it's coordinates in t_tetri
**  the first condition is about to validate the point we directly standing in
*/

int		ft_check_space_for_shape(t_tetri *lt, char **map, int x, int y)
{
	int map_size;

	map_size = 0;
	while (map[0][map_size] != '\n')
		map_size++;
	if ((map[y][x] == '.') &&
	(y + (lt->shape)[0].y < map_size) && (x + (lt->shape)[0].x < map_size) &&
	(map[y + (lt->shape)[0].y][x + (lt->shape)[0].x] == '.') &&
	(y + (lt->shape)[1].y < map_size) && (x + (lt->shape)[1].x < map_size) &&
	(map[y + (lt->shape)[1].y][x + (lt->shape)[1].x] == '.') &&
	(y + (lt->shape)[2].y < map_size) && (x + (lt->shape)[2].x < map_size) &&
	(map[y + (lt->shape)[2].y][x + (lt->shape)[2].x] == '.') &&
	(y + (lt->shape)[3].y < map_size) && (x + (lt->shape)[3].x < map_size) &&
	(map[y + (lt->shape)[3].y][x + (lt->shape)[3].x] == '.'))
		return (1);
	return (0);
}

/*
**  here is small function to put the shape
**	following it's coordinate after succes all checkings
*/

void	ft_put_shape(t_tetri *lt, char **map, int x, int y)
{
	map[y + (lt->shape)[0].y][x + (lt->shape)[0].x] = lt->letter;
	map[y + (lt->shape)[1].y][x + (lt->shape)[1].x] = lt->letter;
	map[y + (lt->shape)[2].y][x + (lt->shape)[2].x] = lt->letter;
	map[y + (lt->shape)[3].y][x + (lt->shape)[3].x] = lt->letter;
}

/*
**  here is one more small function - now to del shape
*/

void	ft_del_shape(t_tetri *lt, char **map, int x, int y)
{
	map[y + (lt->shape)[0].y][x + (lt->shape)[0].x] = '.';
	map[y + (lt->shape)[1].y][x + (lt->shape)[1].x] = '.';
	map[y + (lt->shape)[2].y][x + (lt->shape)[2].x] = '.';
	map[y + (lt->shape)[3].y][x + (lt->shape)[3].x] = '.';
}

void	ft_clear_map(char ***map)
{
	char **tmp;

	if (!(*map))
		return ;
	tmp = *map;
	while (*tmp)
		free(*tmp++);
	free(*map);
}

int		ft_smallest_square(t_tetri *list)
{
	int	map_size;
	int num_tetri;

	num_tetri = 4;
	while ((list = list->next))
		num_tetri += 4;
	map_size = 1;
	while (map_size * map_size < num_tetri)
		map_size++;
	return (map_size);
}
