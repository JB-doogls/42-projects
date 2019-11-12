/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdirect <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 07:57:33 by mdirect           #+#    #+#             */
/*   Updated: 2019/06/21 08:11:51 by mdirect          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"
#include <stdio.h>

t_btree		*btree_create_node(void *item);

int			main(void)
{
	t_btree *derevo;

	derevo = btree_create_node("Dambldore!");
	printf("%s\n", derevo->item);
	return (0);
}
