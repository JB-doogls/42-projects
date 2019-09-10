/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdirect <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 19:58:31 by mdirect           #+#    #+#             */
/*   Updated: 2019/06/21 21:27:52 by mdirect          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <string.h>

void    btree_insert_data(t_btree **root, void *item, int (*cmpf)(char *, char *));
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_putstr(void *str)
{
	  printf("%s\n", str);
}

int		main(void) {
	t_btree *d1 = NULL, *d2 = NULL, *d3 = NULL, *d4 = NULL, *d5 = NULL;
    
    d1 = btree_create_node("7saf");
    d2 = btree_create_node("3qwe");
    d3 = btree_create_node("9Deq");
    d4 = btree_create_node("2adjs112");
    d5 = btree_create_node("6dew");
    d1->left = d2;
    d1->right = d3;
    d2->left = d4;
    d2->right = d5;
	btree_insert_data(&d1, "5dsf", ft_strcmp);
	btree_apply_prefix(d1, ft_putstr);
	return 0;
}
