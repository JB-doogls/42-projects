/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 22:14:05 by edoll             #+#    #+#             */
/*   Updated: 2019/06/21 22:18:26 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_suffix(t_btree *root, void (*applyf) (void *))
{
	if (!root)
	{
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
		applyf(root->item);
	}
}
