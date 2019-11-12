/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 20:15:15 by edoll             #+#    #+#             */
/*   Updated: 2019/06/19 20:29:17 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *cur;

	if (begin_list != NULL && *begin_list != NULL)
	{
		cur = ft_create_elem(data);
		cur->next = *begin_list;
		*begin_list = cur;
	}
	else
		*begin_list = ft_create_elem(data);
}
