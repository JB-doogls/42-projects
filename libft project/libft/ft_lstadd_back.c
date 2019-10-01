/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:08:23 by marvin            #+#    #+#             */
/*   Updated: 2019/10/01 14:08:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *cur;

    if (*alst)
    {
        cur = (*alst);
        while (cur->next)
            cur = cur->next;
        cur->next = new;
    }
}
