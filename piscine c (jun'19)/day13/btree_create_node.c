/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 19:36:38 by edoll             #+#    #+#             */
/*   Updated: 2019/06/21 21:54:31 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *newnd;

	if (!(newnd = (t_btree *)malloc(t_btree)))
		return (NULL);
	newnd->left = NULL;
	newnd->right = NULL;
	newnd->item = item;
	return (newnd);
}
