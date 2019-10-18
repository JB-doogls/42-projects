/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:25:41 by bford             #+#    #+#             */
/*   Updated: 2019/09/28 12:52:21 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int		join_dup(char **con, char *buff)
{
	if (*con)
	{
		if (!(*con = ft_strjoinfree(*con, buff)))
		{
			return (-1);
		}
	}
	else if (!(*con = ft_strdup(buff)))
		return (-1);
	return (0);
}

int		finish(t_gnl **lst, char **line, t_gnl **l_copy)
{
	if (!(*lst)->content)
	{
		*line = NULL;
		return (0);
	}
	*line = ft_strdup((*lst)->content);
	if (!(ft_strlen(*line)))
		return (0);
	free((*lst)->content);
	(*lst)->content = NULL;
	*lst = *l_copy;
	return (0);
}

int		find_lst(t_gnl **lst, t_gnl **l_copy, int fd)
{
	if (!(*lst))
		if (!(*lst = ft_lstnewget(fd)))
			return (-1);
	*l_copy = *lst;
	while ((*lst)->nfd != fd && (*lst)->next)
		*lst = (*lst)->next;
	if ((*lst)->nfd != fd)
	{
		if (!((*lst)->next = ft_lstnewget(fd)))
			return (-1);
		*lst = (*lst)->next;
	}
	return (1);
}

int		check(char **con, char **line, t_gnl **l_copy, t_gnl **lst)
{
	char	*p;
	char	*p2;

	if (!(*con) || !(ft_strchr(*con, '\n')))
		return (0);
	p = ft_strchr(*con, '\n');
	p2 = *con;
	*p++ = '\0';
	if (!(*line = ft_strdup(*con)))
		return (-1);
	if (!(*line) || !(*con = ft_strdup(p)))
		return (-1);
	free(p2);
	*lst = *l_copy;
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static t_gnl	*lst;
	char			buff[BUFF_SIZE + 1];
	int				t;
	t_gnl			*l_copy;

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (find_lst(&lst, &l_copy, fd) == -1)
		return (-1);
	t = check(&(lst->content), line, &l_copy, &lst);
	if (t)
		return (t);
	while ((t = read(fd, buff, BUFF_SIZE)))
	{
		buff[t] = '\0';
		if (join_dup(&(lst->content), buff))
			return (-1);
		t = check(&(lst->content), line, &l_copy, &lst);
		if (t)
			return (t);
	}
	return (finish(&lst, line, &l_copy));
}
