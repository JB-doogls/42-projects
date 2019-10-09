/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_turn2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:59:43 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/10/09 08:30:40 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "gnl_turn2.h"


static int  read_file(t_list *elem)
{
    int ret;
    char *text;
    
    if (elem->content)
    {
        free(elem->content);
        elem->content  = NULL;
    }
    if (!(text = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
        return (-1);
    ret = read(elem->content_size, text, BUFF_SIZE);
    if (ret < 1)
    {
        ft_strdel(&text);
        return (ret);
    }
    text[ret] = '\0';
    if (!(elem->content = ft_memalloc(ret + 1)))
        return (-1);
    elem->content = ft_memcpy(elem->content, text, (ret + 1));
    ft_strdel(&text);
    return (ret);
}

static int  copy_line(char *text, char **line, t_list *elem)
{
    char *first;
    char *sec;
    size_t i;

    if (!(text) || text[0] == '\0')
        return (0);
    else if (!ft_strchr(text, '\n'))
    {
        free(elem->content);
        elem->content = NULL;
        *line = text;
        return (1);
    }
    i = ft_strlen(ft_strchr(text, '\n'));
    first = ft_strsub(text, 0, ft_strlen(text) - i);
    *line = first;
    sec = ft_strsub(text, ft_strlen(text) - i + 1, i - 1);
    ft_strdel(&text);
    free(elem->content);
    if (!(elem->content = ft_memalloc(i)))
        return (-1);
    elem->content = ft_memcpy(elem->content, sec, i);
    ft_strdel(&sec);
    return (1);
}

static int  read_new_line(t_list *elem, char **line)
{
    int r_size;
    char *temp;
    char *text;

    r_size = 1;
    text = NULL;
    while (r_size > 0)
    {
        if (!(text) && elem->content)
            text = ft_strdup(elem->content);
        else if (text && elem->content)
        {
            temp = ft_strjoin(text, elem->content);
            ft_strdel(&text);
            text = temp;
        }
        if ((text && ft_strchr(text, '\n')) || r_size == 0)
        {
            r_size = copy_line(text, line, elem);
            return (r_size);
        }
        r_size = read_file(elem);
    }
    r_size = copy_line(text, line, elem);
    return (r_size);
}

static t_list   *set_cur_elem(int fd)
{
    static t_list *head;
    t_list  *temp;
    t_list  *new;

    if (!(head))
    {
        if (!(head = ft_lstnew(NULL, 0))) 
            return (NULL);
        head->content_size = fd;
    }
    temp = head;
    while (temp)
    {
        if ((int)temp->content_size == fd)
            return (temp);
        else if (temp->next)
            temp = temp->next;
        else
        {
            if (!(new = ft_lstnew(NULL, 0)))
                return (NULL);
            temp->next = new;
            new->content_size = fd;
            return (new);
        }
    }
    return (NULL);
}

int             get_next_line(const int fd, char **line)
{
    t_list *list;
    int ret;

    if (!(*line) || fd < 0 || fd == 1 || fd == 2 || BUFF_SIZE < 0)
        return (-1);
    list = set_cur_elem(fd);
    if (!(list))
        return (-1);
    ret = read_new_line(list, line);
    if (ret == 0 && list)
    {
        free(list->content);
        list->content = NULL;
    }
    return (ret);    
}
