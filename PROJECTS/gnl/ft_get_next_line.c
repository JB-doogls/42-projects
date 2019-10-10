/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:12 by edoll             #+#    #+#             */
/*   Updated: 2019/10/10 20:54:11 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // D E L E T E 

#include "get_next_line.h"

static t_listg		*set_elem(int fd)
{
	t_listg		*elem;
	size_t		ret;
	
	if (!(elem = (t_listg*)malloc(sizeof(t_listg))))
		return (NULL);
	elem->fd = fd;
	if (!(elem->temp = ft_strnew(BUFF_SIZE + 1)))
		return (NULL);
	// // ret = read(fd, elem->temp, BUFF_SIZE);
	// if (ret == -1)
	// 	return (NULL);
	elem->next = NULL;
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
	return (elem);
}

static void			copy_line(t_listg **elem, char **line, char *pos)
{
	char	*fir;
	char	*sec;

	fir = ft_strsub((*elem)->temp, 0, pos - (*elem)->temp);
	sec = ft_strsub((*elem)->temp, ((pos - (*elem)->temp) + 1), ft_strlen(pos - 1));
	*line = ft_strdup(fir);
	ft_memdel((void**)&fir);
	ft_memdel((void**)&((*elem)->temp));
	(*elem)->temp = sec;
//	printf("elem->temp 2 %s\n", (*elem)->temp);
//	printf("line %s\n", *line);
}

static int			read_new_line(int fd, t_listg *elem, char **line)
{
	char	*pos;
	size_t	size;
	size_t	ln;
	size_t ct;

	size = 1;
	ct = 0;
	while (size > 0)
	{
		if ((pos = ft_strchr(elem->temp, '\n')))		
		{
			printf("WAS WE\n");
			copy_line(&elem, line, pos);
			return (1);
		}
		*line = ft_strdup(elem->temp);
		printf("LINE IN %s\n", *line);
		ft_memdel((void **)&(elem->temp));
		if (!(elem->temp = ft_strnew(BUFF_SIZE + 1 + ft_strlen(*line))))
			return (-1);
		ft_strcpy(elem->temp, *line);
		free(*line);
		ct = ft_strlen(elem->temp);
		size = read(fd, &(elem->temp[ct]), BUFF_SIZE);
		(elem->temp)[BUFF_SIZE + ct] = '\0';
			printf("SIZE AFTER READ %zu\n", size);	
		printf("ELEM->TEMP AFTER READ %s\n", elem->temp);
		if (!size)
		{
			
			// free(elem->temp);
			// elem->temp = NULL;
			return (0);
		}
	}
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static t_listg *head;
	t_listg			*cur_elem;
	size_t			ret;

	if (fd < 0 || fd == 1 || fd == 2 || BUFF_SIZE <= 0 || !line)
		return (-1);
	if (!head)
	{
		if (!(head = set_elem(fd)))
			return (-1);
	}
	//*line = ft_strnew(1);
	*line = NULL;
	if (!(cur_elem = set_cur_elem(head, fd)))
		return (-1);
	ret = read_new_line(fd, cur_elem, line);
	if (ret > 0)
	{
		return (1);
		*line = ft_strdup(cur_elem->temp);
	}
	else if (ret == 0)
	{
		// if (cur_elem->temp)
		// 	ft_strcpy(cur_elem->temp, *line);
		// printf("elem->temp %s\n", cur_elem->temp);	
		printf("LINE IN GNL BEFORE %s\n", *line);	
					*line = ft_strdup(cur_elem->temp);
		printf("LINE IN GNL AFTER STRDUP %s\n", *line);
		return (0);
	}
	else
		return (-1);
}
