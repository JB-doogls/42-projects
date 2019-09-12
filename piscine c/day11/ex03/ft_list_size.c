/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 20:31:13 by edoll             #+#    #+#             */
/*   Updated: 2019/06/19 21:54:23 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int len;

	len = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		len++;
	}
	return (len);
}
