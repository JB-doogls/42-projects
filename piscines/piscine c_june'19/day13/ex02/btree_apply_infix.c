/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 22:06:30 by edoll             #+#    #+#             */
/*   Updated: 2019/06/21 22:12:41 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_infix(t_btree *root, void (*applyf) (void *))
{
	if (!root)
	{
		btree_apply_prefix(root->left, applyf);
		applyf(root->item);
		btree_apply_prefix(root->right, applyf);
	}
}
