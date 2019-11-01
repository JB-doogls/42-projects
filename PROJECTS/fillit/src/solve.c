/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:49:10 by edoll             #+#    #+#             */
/*   Updated: 2019/11/01 12:23:56 by jbdoogls         ###   ########.fr       */
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
    int map_size;           // for now size is defined in .h as 2 (2x2 square)
                            //  I plane to make a func. to find min_size value later
    
    map_size = MIN_SQ_SIZE;
    if (!(map = ft_make_map(&map, map_size))
        return (-1);
    while (!(ft_backtrack_algo(map, list, map_size))
        if (!(map = ft_make_map(map, map_size++))
            retrun (-1);
    
    j = 0;                          // <-- it seems we can impliment the output function here //
    while (map[j])                
    {
        ft_putstr(map[j]);
        free(map[j++]);
    }
    return (0);
}

/*
**  function to create and increase the map for arrange the shapes
*/

char    **ft_make_map(char **map, int map_size)
{
    int x;
    int y;
    char *temp;

    if (*map)
    {
        tmp = *map;                     // set as a separate function?
        free (*tmp++);
    }
    if (!(*map = (char**)malloc(sizeof(char*) * (map_size + 1))))
        return (NULL);
    *map[map_size] == NULL;
    y = 0;
    while (y < map_size)
    {
        if (!(*map[y] = (char*)malloc(sizeof(char) * (map_size + 2))))
        {
            tmp = *map;
            free(*tmp++);               // set as a separate function? 
            return (NULL);
        }
        x = 0;
        map[y][map_size] = '\n';
        map[y][map_size + 1] = '\0';
        while (x < map_size)
            map[y][x++] = '.';
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
    while (y++ < map_size)
    {
        x = 0;
        while (x++ < map_size)
        {
            if (ft_check_space_for_shape(list, map, x, y, map_size))
            {
                ft_put_shape(list, map);
                if (list->next && ft_backtrack_algo(map, list, map_size))
                    return (map);
                if (!list->next)
                {
                    ft_put_shape(list, map);
                    return (map);
                }
                else
                {
                    // mark an error-flag ??? \ return error ???
                    // ft_del_shape
                }
                
                    
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
    map[y + lt->shape[0]][x + lt->shape[1]] == '.' &&
    map[y + lt->shape[0]][x + lt->shape[1]] < map_size &&
    map[y + lt->shape[2]][x + lt->shape[3]] == '.' &&
    map[y + lt->shape[2]][x + lt->shape[3]] < map_size &&
    map[y + lt->shape[4]][x + lt->shape[5]] == '.' &&
    map[y + lt->shape[4]][x + lt->shape[5]] < map_size &&
    map[y + lt->shape[6]][x + lt->shape[7]] == '.' &&
    map[y + lt->shape[6]][x + lt->shape[7]] < map_size)
        return (1);
    return (0);
}

/*
**  here is small function to put the shape following it's coordinate after succes all checkings
*/

void    ft_put_shape(t_tetri *lt, char **map)
{
    map[y + lt->shape[0]][x + lt->shape[1]] = lt->c;
    map[y + lt->shape[2]][x + lt->shape[3]] = lt->c;
    map[y + lt->shape[4]][x + lt->shape[5]] = lt->c;
    map[y + lt->shape[6]][x + lt->shape[7]] = lt->c;
}







/*
** **********************************************************
*//*

shape[8] = {0,0, 0,1  1,0, 1,1}
            y,x  y,x  y,x  y,x
            0 1  2 3  4 5  6 7

typedef struct		s_tetri
{
	int					shape[8];
	int					c;
	struct s_tetri		*next;
}					t_tetri;
*/
