/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:25:13 by marvin            #+#    #+#             */
/*   Updated: 2019/10/01 14:25:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *new_elem;
    t_list  *head;

    if ((lst && f) || !(new_elem = ft_lstnew(NULL, 0)))
    {
        new_elem = f(lst);
        head = new_elem;
        free(new_elem);
        while (lst->next)
        {
            free(lst);
            lst = lst->next;
            new_elem->next = f(lst);
            new_elem = new_elem->next;
        }
        return (head);
    }
    return (NULL);
}
