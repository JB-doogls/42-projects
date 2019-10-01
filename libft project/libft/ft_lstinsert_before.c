/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert_before.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:42:22 by marvin            #+#    #+#             */
/*   Updated: 2019/10/01 15:42:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinsert_before(t_list **alst, t_list *target, t_list *new)
{
	t_list	*prev;
	t_list	*cur;

	cur = *alst;
	prev = *alst;
	while (cur)
	{
		if (cur == target)
		{
			if (cur == *alst)
				ft_lstadd_beginning(alst, new);
			else
			{
				new->next = target;
				prev->next = new;
			}
			break;
		}
		prev = cur;
		cur = cur->next;
	}
}
