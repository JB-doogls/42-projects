/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saver_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 20:27:08 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/07 20:28:57 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

/*
** Shifts the coords to the upper-left (to the origin)
** Input:
** 		t_point struct min_xy with minimum x and y coords;
** 		array of 4 t_point structs.
** Output:
** 		array of 4 t_point structs.
*/

t_point		*normalize_coords(t_point min_xy, t_point coords[])
{
	int	i;

	i = 0;
	while (i < POINTS_IN_SHAPE)
	{
		coords[i].x -= min_xy.x;
		coords[i].y -= min_xy.y;
		++i;
	}
	return (coords);
}

/*
** Gets the minimum x and y coords in an array of 4 point structs.
** Returns a point struct.
*/

t_point		get_min_xy(t_point coords[])
{
	t_point	min_xy;
	int		min_x;
	int		min_y;
	int		i;

	min_x = coords[0].x;
	min_y = coords[0].y;
	i = 0;
	while (i < POINTS_IN_SHAPE)
	{
		if (coords[i].x < min_x)
			min_x = coords[i].x;
		if (coords[i].y < min_y)
			min_y = coords[i].y;
		++i;
	}
	min_xy.x = min_x;
	min_xy.y = min_y;
	return (min_xy);
}

/*
** Reads the first 18 chars of an array representing a block.
** Assumes a block is valid.
** Returns an array of 4 point structs if successful, NULL otherwise.
*/

t_point		*get_coords(char *block)
{
	int		x_counter;
	int		y_counter;
	int		i;
	t_point	*coords;
	int		coords_ix;

	if (!(coords = (t_point *)malloc(sizeof(t_point) * POINTS_IN_SHAPE)))
		return (NULL);
	i = 0;
	x_counter = 0;
	y_counter = 0;
	coords_ix = 0;
	while (i < NUM_CHARS_IN_BLOCK - 1)
	{
		if (block[i] == '\n')
		{
			++y_counter;
			x_counter = 0;
		}
		else if (block[i] == '#')
		{
			coords[coords_ix].x = x_counter;
			coords[coords_ix].y = y_counter;
			++coords_ix;
			++x_counter;
		}
		else
			++x_counter;
		++i;
	}
	return (coords);
}

/*
** A test print function
*/

void		print_tetri(t_point *shape, char block_letter)
{
	int		j;
	int		i;
	char	tetri_string[NUM_CHARS_IN_BLOCK + 1];

	tetri_string[NUM_CHARS_IN_BLOCK] = '\0';
	j = 0;
	while (j < NUM_CHARS_IN_BLOCK)
	{
		if ((j + 1) % 5 == 0)
			tetri_string[j] = '\n';
		else
			tetri_string[j] = '.';
		++j;
	}
	i = 0;
	while (i < POINTS_IN_SHAPE)
	{
		tetri_string[shape[i].x + (shape[i].y) * 5] = block_letter;
		++i;
	}
	ft_putstr(tetri_string);
	ft_putchar('\n');
}

/*
** Saves normalized coordinates of a shape in a node of a singly linked
** 'storage_list'
** If successful, returns 1.
** If normalization or saving fails, returns 0.
*/

int			save_tetri(char *block, char block_letter, t_tetri *node)
{
	t_point	*shape;
	t_point	min_coords;

	shape = get_coords(block);
	if (shape)
	{
		min_coords = get_min_xy(shape);
		shape = normalize_coords(min_coords, shape);
		if (!(node->shape))
		{
			if (!(node->shape = malloc(sizeof(t_point) * POINTS_IN_SHAPE)))
			{
				free(shape);
				return (0);
			}
			ft_memcpy(node->shape, (void *)shape, sizeof(t_point) * POINTS_IN_SHAPE);
			node->letter = block_letter;
		}
		else
		{
			while (node->next)
				node = node->next;
			if (!(ft_addnode(shape, block_letter, node)))
			{
				free(shape);
				return (0);
			}
		}
		free(shape);
	}
	return (1);
}
