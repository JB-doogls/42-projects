/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:09 by edoll             #+#    #+#             */
/*   Updated: 2019/10/17 14:48:38 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_listg
{
	int				fd;
	char			*temp;
	struct s_listg	*next;
}				t_listg;

int				get_next_line(const int fd, char **line);

#endif
