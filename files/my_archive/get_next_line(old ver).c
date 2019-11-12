/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:11:30 by edoll             #+#    #+#             */
/*   Updated: 2019/10/18 10:42:05 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_gnl		*set_elem(int fd)
{
	t_gnl		*elem;

	if (!(elem = (t_gnl*)malloc(sizeof(t_gnl))))
		return (NULL);
	elem->fd = fd;
	if (!(elem->temp = ft_strnew(BUFF_SIZE + 1)))
		return (NULL);
	elem->next = NULL;
	return (elem);
}

static t_gnl		*set_cur_elem(t_gnl *head, int fd)
{
	t_gnl		*elem;

	while (head)
	{
		if (head->fd == fd)
			return (head);
		if (!(head->next))
			break ;
		head = head->next;
	}
	if (!(elem = set_elem(fd)))
		return (NULL);
	head->next = elem;
	return (elem);
}

static void			copy_line(t_gnl *elem, char **line, char *pos)
{
	char		*fir;
	char		*sec;

	// if (ft_strchr(elem->temp, '\n') == NULL)
	// {
	// 	*line = ft_strdup(elem->temp);
	// 	return ();
	// }
	fir = ft_strsub(elem->temp, 0, ft_strlen(elem->temp) - ft_strlen(pos));
	sec = ft_strsub(elem->temp, (ft_strlen(elem->temp) - ft_strlen(pos) + 1),\
	ft_strlen(elem->temp) - ft_strlen(fir));
	*line = ft_strdup(fir);
	ft_memdel((void**)&fir);
	ft_memdel((void**)&(elem->temp));
	elem->temp = sec;
}

static int			read_new_line(int fd, t_gnl *elem, char **line)
{
	char		*pos;
	size_t		size;
	size_t		ln;

	size = 1;
	while (size > 0)
	{
		if ((pos = ft_strchr(elem->temp, '\n')))
		{
			copy_line(elem, line, pos);
			return (1);
		}
		*line = ft_strdup(elem->temp);
		ft_memdel((void **)&(elem->temp));
		if (!(elem->temp = ft_strnew(BUFF_SIZE + 1 + ft_strlen(*line))))
			return (-1);
		ft_strcpy(elem->temp, *line);
		free(*line);
		ln = ft_strlen(elem->temp);
		size = read(fd, &(elem->temp[ln]), BUFF_SIZE);
		(elem->temp)[BUFF_SIZE + ln] = '\0';
		if (!size)
			return (0);
	}
	return (1);
}

int					get_next_line(int const fd, char **line)
{
	static t_gnl	*head;
	t_gnl			*cur_elem;
	size_t			ret;

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (!head)
	{
		if (!(head = set_elem(fd)))
			return (-1);
	}
	*line = NULL;
	if (!(cur_elem = set_cur_elem(head, fd)))
		return (-1);
	ret = read_new_line(fd, cur_elem, line);
	if (ret > 0)
		return (1);
	else if (ret == 0)
	{
		*line = ft_strdup(cur_elem->temp);
		return (0);
	}
	else
		return (-1);
}
