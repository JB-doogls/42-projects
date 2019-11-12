/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saver.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:36:16 by edoll             #+#    #+#             */
/*   Updated: 2019/11/10 20:32:15 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Shifts the coords to the upper-left (to the origin)
** Input:
** 		t_point struct xy with x and y coords of first point in an
** 		array of 4 t_point structs.
** Output:
** 		array of 4 t_point structs.
*/

static t_point		*ft_normalize_coords(t_point xy, t_point coords[])
{
	int	i;

	i = 0;
	while (i < POINTS_IN_SHAPE)
	{
		coords[i].x -= xy.x;
		coords[i].y -= xy.y;
		++i;
	}
	return (coords);
}

/*
** Gets the x and y coords of the first pont in an array of 4 point structs.
** Returns a point struct.
*/

static t_point		ft_get_first_xy(t_point coords[])
{
	t_point	xy;
	int		x;
	int		y;

	x = coords[0].x;
	y = coords[0].y;
	xy.x = x;
	xy.y = y;
	return (xy);
}

/*
** Reads the first 18 chars of an array representing a block.
** Assumes a block is valid.
** Returns an array of 4 point structs if successful, NULL otherwise.
*/

static t_point		*ft_get_coords(char *block)
{
	int		i;
	t_point	*coords;
	int		coords_ix;

	if (!(coords = (t_point *)malloc(sizeof(t_point) * POINTS_IN_SHAPE)))
		return (NULL);
	i = 0;
	coords_ix = 0;
	while (i < NUM_CHARS_IN_BLOCK - 1)
	{
		if (block[i] == '#')
		{
			coords[coords_ix].x = ((i + 1) % 5) - 1;
			coords[coords_ix].y = (i + 1) / 5;
			++coords_ix;
		}
		++i;
	}
	return (coords);
}

/*
** Saves normalized coordinates of a shape in a node of a singly linked
** 'storage_list'
** If successful, returns 1.
** If normalization or saving fails, returns 0.
*/

static int			ft_save_in_node(t_point *shape, char letter, t_tetri *node)
{
	if (!(node->shape))
	{
		if (!(node->shape = malloc(sizeof(t_point) * POINTS_IN_SHAPE)))
		{
			free(shape);
			return (0);
		}
		ft_memcpy(node->shape, shape, sizeof(t_point) * POINTS_IN_SHAPE);
		node->letter = letter;
	}
	else
	{
		while (node->next)
			node = node->next;
		if (!(ft_addnode(shape, letter, node)))
		{
			free(shape);
			return (0);
		}
	}
	return (1);
}

int					ft_save_tetri(char *block, char block_letter, t_tetri *node)
{
	t_point	*shape;
	t_point	min_coords;

	shape = ft_get_coords(block);
	if (shape)
	{
		min_coords = ft_get_first_xy(shape);
		shape = ft_normalize_coords(min_coords, shape);
		if (!(ft_save_in_node(shape, block_letter, node)))
		{
			free(shape);
			return (0);
		}
		free(shape);
	}
	return (1);
}
