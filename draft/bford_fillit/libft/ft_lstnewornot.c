/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewornot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:34:44 by bford             #+#    #+#             */
/*   Updated: 2019/09/24 13:54:40 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstnewornot(t_fil **lst, t_fil **ptr, char c, int i)
{
	if (!(*lst))
	{
		if (!(*lst = ft_lst_new_f(c, i)))
			return (-1);
		return (1);
	}
	while ((*lst)->next)
		*lst = (*lst)->next;
	if (!((*lst)->next = ft_lst_new_f(c, i)))
		return (-1);
	*lst = *ptr;
	return (1);
}
