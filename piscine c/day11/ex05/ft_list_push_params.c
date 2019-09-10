/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 21:47:15 by edoll             #+#    #+#             */
/*   Updated: 2019/06/19 23:44:57 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *cur;
	t_list *first;

	if (ac == 0)
		return (NULL);
	else
	{
		while (ac >= 1)
		{
			if (cur == NULL)
			{
				cur = ft_create_elem(av[ac - 1]);
				first = cur;
				//cur = cur->next;
				ac--;
			}
			else
			{
				cur->next = ft_create_elem(av[ac]);
				cur = cur->next;
				ac--;
			}
		}
		cur->next = ft_create_elem(av[ac]);
	}
	return (first);
}
