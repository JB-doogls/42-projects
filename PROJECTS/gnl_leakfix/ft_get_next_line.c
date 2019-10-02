/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:12 by edoll             #+#    #+#             */
/*   Updated: 2019/10/02 16:02:24 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_listg		*set_elem(int fd)
{
	t_listg		*elem;
	int			ret;
	
	if (!(elem = (t_listg*)malloc(sizeof(t_listg))))
		return (NULL);
	elem->fd = fd;
	if (!(elem->temp = ft_strnew(BUFF_SIZE + 1)))
		return (NULL);
	ret = read(fd, elem->temp, BUFF_SIZE);
	if (ret == -1)
		return (NULL);
	elem->next = NULL;
//	elem->prev = NULL;
	return (elem);
}
static t_listg		*set_cur_elem(t_listg *head, int fd)
{
	t_listg	*elem;

	while (head)
	{
		if (head->fd == fd)
			return (head);
		if (!(head->next))
			break;
		head = head->next;
	}
	if (!(elem = set_elem(fd)))
		return (NULL);
	head->next = elem;
		//here??					// what about prev???? //
	return (elem);
}

static void			copy_line(t_listg *elem, char **line, char *pos)
{
	char	*fir;
	char	*sec;
	char	*temp_free;

	fir = ft_strsub(elem->temp, 0, pos - elem->temp);
	sec = ft_strsub(elem->temp, ((pos - elem->temp) + 1), ft_strlen(elem->temp));
	temp_free = *line;
	*line = ft_strjoin_free(*line, fir);
											//	*line = ft_strjoin_free(*line, fir);
	ft_memdel((void**)&temp_free);
	ft_memdel((void**)&fir);
	ft_memdel((void**)&(elem->temp));
	elem->temp = sec;
}

static int			read_new_line(int fd, t_listg *elem, char **line)
{
	char	*pos;
	char	*temp_free;
	size_t	size;
	size_t	ln;

	size = 1;
	while (size > 0)
	{
		if ((pos = ft_strchr(elem->temp, '\n')))
		{
			copy_line(elem, line, pos);
			return (1);
		}
		temp_free = *line;
		*line = ft_strjoin_free(*line, elem->temp);
		ft_memdel((void **)&temp_free);
		ln = ft_strlen(elem->temp);
		ft_memdel((void **)&(elem->temp));
		if (!(elem->temp = ft_strnew(BUFF_SIZE + 1)))
			return (-1);
		size = read(fd, elem->temp, BUFF_SIZE);
		//ft_memdel((void**)&(elem->temp));
		if (!size && !ln)
			return (0);
	}
//	ft_memdel((void**)&line);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static t_listg	*head;
	t_listg			*cur_elem;
	int				ret;

	if (fd < 0 || fd == 1 || fd == 2 || BUFF_SIZE <= 0 || !line)
		return (-1);
	if (!head)
	{
		if (!(head = set_elem(fd)))
			return (-1);
	}
	*line = ft_strnew(1);
	if (!(cur_elem = set_cur_elem(head, fd)))
		return (-1);
	ret = read_new_line(fd, cur_elem, line);
	if (ret > 0)
		return (1);
	else if (ret == 0)
		return (0);
	else
		return (-1);
}
