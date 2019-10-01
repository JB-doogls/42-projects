/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:47:28 by marvin            #+#    #+#             */
/*   Updated: 2019/10/01 13:47:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
    if (*alst && alst && del)
    {
        while (alst->next)
        {
            ft_lstdelone(*alst, del);
            alst = alst->next;
        }
        ft_lstdelone(*alst, del);
        *alst = NULL;
    }
}
