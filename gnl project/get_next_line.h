/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:09 by edoll             #+#    #+#             */
/*   Updated: 2019/09/30 19:49:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 99

typedef struct 		s_l_gnl
{
	int				*fd;
	char			*temp;
	struct s_l_gnl	*next;
}					t_l_gnl

int		get_next_line(int const fd, char **line);
