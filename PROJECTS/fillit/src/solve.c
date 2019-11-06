/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:49:10 by edoll             #+#    #+#             */
/*   Updated: 2019/11/06 21:01:59 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
**  algorithm control module
*/

int     ft_solving(t_tetri *list)
{
    char **map;
    int j;
    int map_size;
	
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

/*
**  function to create and increase the map for arrange the shapes
*/

char    **ft_make_map(char ***map, int map_size)
{
    int     x;
    int     y;

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
**  recursive algorithm for solving the issue 
**      this is a prototype - without a tool for delete incorrect turn of shape puting and nessesuary return-values the same     
*/

char    **ft_backtrack_algo(char **map, t_tetri *list, int map_size)
{
    int x;
    int y;
    
    y = 0;
    while (y < map_size)
    {
        x = 0;
        while (x < map_size)
        {
            if (ft_check_space_for_shape(list, map, x, y, map_size))
            {
                ft_put_shape(list, map, x, y);
                if (!list->next || (list->next && ft_backtrack_algo(map, list->next, map_size)))
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
**  check the map in current specific point (x,y) for possibility to put the shape following it's coordinates in t_tetri
**  the first condition is about to validate the point we directly standing in
*/

int     ft_check_space_for_shape(t_tetri *lt, char **map, int x, int y, int map_size)
{
	if (map[y][x] == '.' &&
	y + lt->shape[0] < map_size && x + lt->shape[1] < map_size &&
	map[y + lt->shape[0]][x + lt->shape[1]] == '.' &&
	y + lt->shape[2] < map_size && x + lt->shape[3] < map_size &&
	map[y + lt->shape[2]][x + lt->shape[3]] == '.' &&
	y + lt->shape[4] < map_size && x + lt->shape[5] < map_size &&
	map[y + lt->shape[4]][x + lt->shape[5]] == '.' &&
	y + lt->shape[6] < map_size && x + lt->shape[7] < map_size &&
	map[y + lt->shape[6]][x + lt->shape[7]] == '.')
		return (1);
	return (0);
}

/*
**  here is small function to put the shape following it's coordinate after succes all checkings
*/

void    ft_put_shape(t_tetri *lt, char **map, int x, int y)
{
    map[y + lt->shape[0]][x + lt->shape[1]] = lt->letter;
    map[y + lt->shape[2]][x + lt->shape[3]] = lt->letter;
    map[y + lt->shape[4]][x + lt->shape[5]] = lt->letter;
    map[y + lt->shape[6]][x + lt->shape[7]] = lt->letter;
}

void    ft_del_shape(t_tetri *lt, char **map, int x, int y)
{
    map[y + lt->shape[0]][x + lt->shape[1]] = '.';
    map[y + lt->shape[2]][x + lt->shape[3]] = '.';
    map[y + lt->shape[4]][x + lt->shape[5]] = '.';
    map[y + lt->shape[6]][x + lt->shape[7]] = '.';
}

void	ft_clear_map(char ***map)
{
	char **tmp;

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

/*
** **********************************************************
*//*

shape[8] = {0,0, 0,1  1,0, 1,1}
            y,x  y,x  y,x  y,x
        
		    0 1  2 3  4 5  6 7

 


**************************
	xx
	xx 		0,0, 0, 1, 1, 0, 1, 1
	
	x		0,0, 1, 0, 2, 0, 3, 0
	x
	x
	x			
	
	xxxx	0,0, 0, 1, 0, 2, 0, 3
	
	xx		0,0, 0, 1, 1, 0, 2, 0
	x
	x

	0, 1, 0, 2, 1, 2
	1, 0, 1, 1, 1, 2
	0, 1, 1, 1, 2, 1
	
**************************



typedef struct		s_tetri
{
	int					shape[8];
	char				c;
	struct s_tetri		*next;
}					t_tetri;
*/
