/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:11:30 by edoll             #+#    #+#             */
/*   Updated: 2019/10/18 12:43:47 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		set_cur_list(t_gnl **list, t_gnl **l_head, int fd)
{
	if (!(*list))
		if (!((*list) = ft_lstnewset(fd)))
			return (-1);
	*l_head = *list;
	while ((*list)->fd != fd && (*list)->next)
		*list = (*list)->next;
	if ((*list)->fd != fd)
	{
		if (!((*list)->next = ft_lstnewset(fd)))
			return (-1);
		*list = (*list)->next;
	}
	return (1);
}

static int			check_read_line(char **cont, char **line, t_gnl **list, t_gnl **l_head)
{
	char	*pos;
	char	*tmp;

	if (!(*cont) || !(ft_strchr(*cont, '\n')))
		return (0);
	pos = ft_strchr(*cont, '\n');
	tmp = *cont;
	*pos++ = '\0';
	if (!((*line) = ft_strdup(*cont)))
		return (-1);
	if (!(*line) || !(*cont = ft_strdup(pos)))
		return (-1);
	free(tmp);
	*list = *l_head;
	return (1);
}

static int			rec_read_line(char **cont, char *buff)
{
	if (*cont)
	{
		if (!(*cont = ft_strjoin_free(*cont, buff)))
			return (-1);
	}
	else if (!(*cont = ft_strdup(buff)))
		return (-1);
	return (0);
}

static int			write_last_line(t_gnl **list,  t_gnl **l_head, char **line)
{
	if (!(*list)->content)
	{
		*line = NULL;
		return (0);
	}
	*line = ft_strdup((*list)->content);
	if (!(ft_strlen(*line)))
		return (0);
	free((*list)->content);
	(*list)->content = NULL;
	*list = *l_head;
	return (0);
}

int					get_next_line(int const fd, char **line)
{
	static t_gnl	*list;
	t_gnl			*l_head;
	size_t			ret;
	char			buff[BUFF_SIZE + 1];

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (set_cur_list(&list, &l_head, fd) == -1)
		return (-1);
	ret = check_read_line(&(list->content), line, &list, &l_head);
	if (ret)
		return (ret);
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		if (rec_read_line(&(list->content), buff))
			return (-1);
		ret = check_read_line(&(list->content), line, &list, &l_head);
		if (ret)
			return (ret);
	}
	return (write_last_line(&list, &l_head, line));
}
