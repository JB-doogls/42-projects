sti/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 18:48:30 by edoll             #+#    #+#             */
/*   Updated: 2019/06/19 19:40:26 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *cur;

	if (begin_list != NULL && *begin_list != NULL)
	{
		cur = *begin_list;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
