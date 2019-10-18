/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:09 by edoll             #+#    #+#             */
/*   Updated: 2019/10/18 13:39:00 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1000
                                // # define MAX_FD  
# include <fcntl.h>
# include "libft/libft.h"

// typedef struct	s_list_gnl
// {
// 	int					fd;
// 	char				*content;
// 	struct s_list_gnl	*next;
// }				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
