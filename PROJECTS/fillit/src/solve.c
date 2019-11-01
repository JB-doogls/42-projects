/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:49:10 by edoll             #+#    #+#             */
/*   Updated: 2019/11/01 10:23:01 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int ft_solving(t_fil list)
{
    char **map;
    int j;
    int map_size;           // for now size is defined as 2 (2x2 square)
                            //  I plane to make a func. to find min_size value later
    
    map_size = MIN_SQ_SIZE;
    if (!(map = ft_make_map(&map, map_size))
        return (-1);
    while (!(ft_backtrack_algo(map, list, map_size))
        if (!(map = ft_make_map(&map, map_size++))
            retrun (-1);
    
    
    j = 0;                          // <-- seems we can impliment the func to printing result here //
    while (map[j])                
    {
        ft_putstr(map[j]);
        free(map[j++]);
    }
    return (0);
}


char    **ft_make_map(char **map, map_size)
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
    while (y < z)
    {
        if (!(*map[y] = (char*)malloc(sizeof(char) * (map_size + 2))))
        {
            tmp = *map;
            free(*tmp++);               // set as a separate function? 
            return (NULL);
        }
        x = 0;
        map[y][z] = '\n';
        map[y][z + 1] = '\0';
        while (x < map_size)
            map[y][x++] = '.';
        y++;
    }
    return (*map);
}

int ft_backtrack_algo(map, list, map_size)
{
    int x;
    int y;
    
}