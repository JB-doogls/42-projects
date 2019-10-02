/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_turn2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:59:43 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/10/02 20:24:03 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// t_list			*ft_lstnew(void const *content, size_t content_size);
// void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
// void			ft_lstdel(t_list **alst, void (*del)(void*, size_t));
// void			ft_lstadd(t_list **alst, t_list *new);
// void			ft_lstadd_back(t_list **alst, t_list *new);
// void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
// t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
// void			ft_lstinsert_before(t_list **alst, t_list *target, t_list *new);
// void			ft_lstinsert_after(t_list *target, t_list *new);


typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
/*
**  typedef struct -move- gnl.h
*/

#include "gnl_turn2.h"


static t_list   *init_new_elem(int fd)
{
    static t_list   *head;
    t_list          *cur;
    t_list          *new;

    if (!head)
    {
        if (!(elem = ft_lstnew(NULL, 0)))
            return (NULL);
        head->content_size = fd;
    }
    cur = head;
    while (cur)
    {
        if ((int)cur->xontent_size == fd)
            return (cur);
        else if (cur->next)
            cur = cur->next;
        else
        {
            if (!(new = ft_lstnew(NULL, 0)))
                return (NULL);
            cur->next = new;
            cur->content_size = fd;
        }
    }
    return (NULL);
}



int             get_next_line(const int fd, char **line)
{
    
    t_list          *cur;
    int             ret;

    if (!*line || fd < 0 || fd == 1 || fd == 2 || BUFF_SIZE < 0)
        return (-1);
    if (!(cur = init_new_elem(fd)))
        return (-1);


}
