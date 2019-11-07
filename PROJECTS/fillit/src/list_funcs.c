/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 17:58:33 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/07 20:28:59 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

t_tetri	*ft_createlist(t_point const *shape, char letter)
{
	t_tetri	*node;

	if (!(node = (t_tetri *)malloc(sizeof(t_tetri))))
		return (NULL);
	if (!shape)
	{
		node->shape = NULL;
		node->letter = 0;
	}
	else
	{
		if (!(node->shape = malloc(sizeof(t_point) * POINTS_IN_SHAPE)))
			return (NULL);
		ft_memcpy(node->shape, (void *)shape, sizeof(t_point) * POINTS_IN_SHAPE);
		node->letter = letter;
	}
	node->next = NULL;
	return (node);
}

int		ft_addnode(t_point *shape, char letter, t_tetri *last_node)
{
	t_tetri *node;

	if ((node = ft_createlist(shape, letter)))
	{
		last_node->next = node;
		return (1);
	}
	else
		return (0);
}

void	ft_deletelist(t_tetri *list_head)
{
	t_tetri *node;
	t_tetri *tmp_node;

	node = list_head;
	while (node->next)
	{
		free(node->shape);
		node->shape = NULL;
		tmp_node = node;
		free(tmp_node);
		node = node->next;
	}
	free(node->shape);
	free(node);
	node = NULL;
}

void	ft_printlist(t_tetri *node)
{
	while (node->next)
	{
		print_tetri(node->shape, node->letter);
		node = node->next;
	}
	print_tetri(node->shape, node->letter);
}
