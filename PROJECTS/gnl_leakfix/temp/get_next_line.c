/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:05:35 by eboris            #+#    #+#             */
/*   Updated: 2019/09/30 15:13:52 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		gnl_read_file(t_list *list)
{
	int		read_result;
	char	*text;

	if (list->content != NULL)
	{
		free(list->content);
		list->content = NULL;
	}
	if ((text = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))) == NULL)
		return (-1);
	read_result = read(list->content_size, text, BUFF_SIZE);
	if (read_result < 1)
	{
		ft_strdel(&text);
		return (read_result);
	}
	text[read_result] = '\0';
	if ((list->content = ft_memalloc(read_result + 1)) == NULL)
		return (-1);
	list->content = ft_memcpy(list->content, text, (read_result + 1));
	ft_strdel(&text);
	return (read_result);
}

static int		gnl_write_string(char *text, char **line, t_list *list)
{
	char	*temp;
	char	*temp2;
	int		i;

	if ((text == NULL) || (text[0] == '\0'))
		return (0);
	else if (ft_strstr(text, "\n") == NULL)
	{
		free(list->content);
		list->content = NULL;
		*line = text;
		return (1);
	}
	i = ft_strlen(ft_strstr(text, "\n"));
	temp = ft_strsub(text, 0, ft_strlen(text) - i);
	*line = temp;
	temp2 = ft_strsub(text, ft_strlen(text) - i + 1, i - 1);
	ft_strdel(&text);
	free(list->content);
	if ((list->content = ft_memalloc(i)) == NULL)
		return (-1);
	list->content = ft_memcpy(list->content, temp2, i);
	ft_strdel(&temp2);
	return (1);
}

static int		gnl_read_string(t_list *list, char **line)
{
	int		f_read;
	char	*text;
	char	*temp;

	text = NULL;
	f_read = 1;
	while (f_read > 0)
	{
		if ((text == NULL) && (list->content != NULL))
			text = ft_strdup(list->content);
		else if ((text != NULL) && (list->content != NULL))
		{
			temp = ft_strjoin(text, list->content);
			ft_strdel(&text);
			text = temp;
		}
		if ((text != NULL) && ((ft_strstr(text, "\n")) || (f_read == 0)))
		{
			f_read = gnl_write_string(text, line, list);
			return (f_read);
		}
		f_read = gnl_read_file(list);
	}
	f_read = gnl_write_string(text, line, list);
	return (f_read);
}

static t_list	*gnl_find_list(int fd)
{
	static t_list	*first_list;
	t_list			*temp;
	t_list			*new;

	if (first_list == NULL)
	{
		if ((first_list = ft_lstnew(NULL, 0)) == NULL)
			return (NULL);
		first_list->content_size = fd;
	}
	temp = first_list;
	while (temp != NULL)
		if ((int)temp->content_size == fd)
			return (temp);
		else if (temp->next != NULL)
			temp = temp->next;
		else
		{
			if ((new = ft_lstnew(NULL, 0)) == NULL)
				return (NULL);
			temp->next = new;
			new->content_size = fd;
		}
	return (NULL);
}

int				get_next_line(const int fd, char **line)
{
	t_list	*list;
	char	a;
	int		exit_code;

	if ((line == NULL) || (fd < 0) || (read(fd, &a, 0) < 0))
		return (-1);
	list = gnl_find_list(fd);
	if (!(list))
		return (-1);
	exit_code = gnl_read_string(list, line);
	if ((exit_code == 0) && (list))
	{
		free(list->content);
		list->content = NULL;
	}
	return (exit_code);
}
