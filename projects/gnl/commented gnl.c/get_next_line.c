/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:11:38 by edoll             #+#    #+#             */
/*   Updated: 2019/10/19 04:01:31 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**	GENERAL EXPLANATION
**
**	
**		|| What the get_next_line do ||
**	
**	gnl is designed to be caaled from any main function (main.c for example). 
**	Gnl takes the file descriptor and pointer to save the line read. 
**		
**	1 CALL = SAVE 1 LINE
**		in pointer *line and return the value of reading:
**	
**	LINE - is an any numbers of char with '\n' at the end
**	RETURN VALUE: 
**		1 = line has been read
**  	0 = reading complited
** 		-1 = error
**
**
**		|| What we have to do ||
**
**	1) allocate some storage to hold our lines the correct way.
**	we doesn't know how many bytes 'll needed to read, so we have to:
**
**	2) read in some temp-storage (buff) step by step follow the BUFF_SIZE
**		- save the read part in our main-storage (list->content)
**		  add that part to storage list->content after the text part, was read before or just add it, 
**		  if there are no part was read before
**	3) after each read-turn check text saved in storage list->content for '\n'
**		- while there no '\n' - save read part in pointer *line and move fwd
**		- if find '\n': 
**			* save in pointer *line part of text from the begining to '\n'
**			* save in storage list->content part of text after the '\n' 
**			  (if that part already read. If no - just save the '\0' and move fwd)
**	4) repeat steps till the func "read" != 0
**	5) when "read" return 0 - reading complited and we have to:
**		- check is there the part of text was saved in storage list->content on the last turn of read
**		  if there is - save last part in pointer *line, free storage list->content and return correct value (0 or 1)
**
**
**
**		|| GENERAL function algorithm ||
**
**	NOTE#1: 
**			it's usefull to design each func's to return int value (1 || 0 || -1). This'll provide you
**			to go easier in checking the result of calling any func's in your get_next_line
**	NOTE#2:
**			all funcs use parametrs like **list, **line, **cont... 
**			this helps us to make any changes with pointers signed used in execution mem.areas (*list, *line, *cont and so)
**			ergo - to pass the parametr to func need to use synt like (*list)->content or &list and so
**
**	1.func "set_list"
**		Create (allocate) the storage *list. Check if for save correct fd value (set correct if that wasn't)
**	2.func "check_line"
**		check storage list->content for text was read from the line 
**		and save it in *line and list->content by the correct way
**	3.func "read" (ret = read(..))	
**		read line from the fd by BUFF_SIZE and save result in temp-storage "buff"  
**	4.func "rec_line"
**		save (record) read part from "buff" to "list->content" (add to prev.part or just add as a new)
**	5.func "check_line"
**		completely similar to par.2 
**	6.func "write_last"
**		check is there a some text from the last turn of read. Save it correct way and free storages.
**
*/




int		write_last(t_gnl **list, t_gnl **l_head, char **line)
/*
**	work with the result of last read-turn from get_next_line
**	save the last text part in *line in case it's exist
**	set the currect return value (1 || 0)
*/
{
	char *is_feed;

	if (!(*list)->content)							/* if no text - reading complite, return (0) */
	{
		*line = NULL;
		return (0);
	}
	*line = ft_strdup((*list)->content);			/* if text - save to *line 						*/
	if (!(ft_strlen(*line)))						/* check if it was not a text ('\0' for example) */
		return (0);
	is_feed = ft_strchr((*list)->content, '\n');	
	free((*list)->content);
	(*list)->content = NULL;
	*list = *l_head;
	if (!is_feed)									/* if there're no '\n' in text - we can't confirm that line is ended */
		return (1);									/* so we have to continue reading by return (1) */
	else
		return (0);									/* if we find '\n' - line is ended and reading complited */
}



int		rec_line(char **cont, char *buff)
/*
**	just save the result of reading turn from buff to list->content
*/
{
	if (*cont)
	{
		if (!(*cont = ft_strjoin_free(*cont, buff)))		/* if there was prev part of text in *cont - join prev and new part */
			return (-1);
	}
	else if (!(*cont = ft_strdup(buff)))					/* if there wasn't prev part - save current part as a new string */
		return (-1);
	return (0);
}

int		check_line(char **cont, char **line, t_gnl **list, t_gnl **l_head)
/*
**	check and save the text parts - results of new read-turn
*/
{
	char	*pos;
	char	*tmp;

	if (!(*cont) || !(ft_strchr(*cont, '\n')))	/* if *cont is empty and there are no '\n' - ergo we've no read full line yet */
		return (0);								/* so - return (0) and continue reading in get_next_line 					  */
	pos = ft_strchr(*cont, '\n');
	tmp = *cont;								/* tmp used to save the pointer to mem area signed by *cont - becouse down, *cont will be set to new mem area (by ft_strdup(pos)) */
	*pos++ = '\0';
	if (!((*line) = ft_strdup(*cont)))
		return (-1);
	if (!(*line) || !(*cont = ft_strdup(pos)))
		return (-1);
	free(tmp);									/* here we free mem area that used *cont before ft_strdup(pos) */
	*list = *l_head;
	return (1);									/* return (1) - ergo line complitely read, and in get_next_line we break the execution */
}



int		set_list(t_gnl **list, t_gnl **l_head, int fd)
/*
**	create list for starage our data. Check current list for correct fd value
*/
{
	if (!(*list))
		if (!((*list) = ft_lstnewset(fd)))
			return (-1);
	*l_head = *list;
	while ((*list)->fd != fd && (*list)->next)		/* find and set correct node if it exist */
		*list = (*list)->next;
	if ((*list)->fd != fd)							/* if such node doesnt't exist - create and set correct fd */
	{
		if (!((*list)->next = ft_lstnewset(fd)))
			return (-1);
		*list = (*list)->next;
	}
	return (1);
}



int		get_next_line(int const fd, char **line)
/*
**	Main algorithm. Break and return value if read full line (1 full line = break, return)
*/
{
	static t_gnl	*list;												/* static variable! - read about it! */
	t_gnl			*l_head;
	size_t			ret;
	char			buff[BUFF_SIZE + 1];

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (set_list(&list, &l_head, fd) == -1)
		return (-1);
	ret = check_line(&(list->content), line, &list, &l_head);			/* becouse of use static variable we need to check list at first */
	if (ret)
		return (ret);
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		if (rec_line(&(list->content), buff))
			return (-1);
		ret = check_line(&(list->content), line, &list, &l_head);
		if (ret)
			return (ret);
	}
	return (write_last(&list, &l_head, line));
}

