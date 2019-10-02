/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:09 by edoll             #+#    #+#             */
/*   Updated: 2019/10/02 14:58:00 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//# ifndef BUFF_SIZE
# define BUFF_SIZE (4096)
// #  elif BUFF_SIZE > SSIZE_MAX
// #   undef BUFF_SIZE
// #   define BUFF_SIZE (4096)
// # endif
# define MAX_FD 256 + 1							// launchctl limit maxfiles // ulimit -n //

# include <fcntl.h>
# include "libft/libft.h"

 int get_next_line(const int fd, char **line);

#endif
