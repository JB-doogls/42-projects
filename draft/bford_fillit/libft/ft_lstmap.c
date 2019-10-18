/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:19:38 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_dellst(t_list *copy)
{
	t_list	*copy2;

	copy2 = copy->next;
	free(copy->content);
	copy->content_size = 0;
	free(copy->next);
	free(copy);
	if (copy2)
		ft_dellst(copy2);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;
	t_list	*new;

	if (!lst || !f ||
	!(new = ft_lstnew((f(lst))->content, (f(lst))->content_size)))
		return (NULL);
	copy = new;
	while (lst->next)
	{
		if (!(new->next = ft_lstnew((f(lst->next))->content,
		(f(lst->next))->content_size)))
		{
			ft_dellst(copy);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (copy);
}
