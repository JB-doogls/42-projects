/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdirect <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 19:58:31 by mdirect           #+#    #+#             */
/*   Updated: 2019/06/21 20:25:30 by mdirect          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void    btree_apply_prefix(t_btree *root, void (*applyf)(void *));
t_btree			*btree_create_node(void *item);

void			ft_putstr(void *str)
{
	  printf("%s\n", str);
}

int				main(void) {
	t_btree *d1 = NULL, *d2 = NULL, *d3 = NULL, *d4 = NULL, *d5 = NULL;
    
    d1 = btree_create_node("1saf");
    d2 = btree_create_node("2qwe");
    d3 = btree_create_node("3Deq");
    d4 = btree_create_node("4adjs112");
    d5 = btree_create_node("5dew");
    d1->left = d2;
    d1->right = d3;
    d2->left = d4;
    d2->right = d5;
	btree_apply_prefix(d1, &ft_putstr);
			    
	return 0;
}
