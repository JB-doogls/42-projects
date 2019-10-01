/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:09 by edoll             #+#    #+#             */
/*   Updated: 2019/10/01 04:36:26 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#  ifndef BUFF_SIZE
#   define BUFF_SIZE (4096)
#  elif BUFF_SIZE > SSIZE_MAX
#   undef BUFF_SIZE
#   define BUFF_SIZE (4096)
# endif
# define MAX_FD 256 + 1							// launchctl limit maxfiles // ulimit -n //

# include <fcntl.h>
# include "libft/libft.h"

typedef struct 			s_listg
{
	int					fd;
	char				*temp;
	struct s_listg		*next;
//	struct s_listg		*prev;
} 						t_listg;

int		get_next_line(int const fd, char **line);

#endif