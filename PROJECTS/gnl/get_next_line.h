/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:09 by edoll             #+#    #+#             */
/*   Updated: 2019/10/09 20:33:24 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//# ifndef BUFF_SIZE
# define BUFF_SIZE (11)
// #  elif BUFF_SIZE > SSIZE_MAX
// #   undef BUFF_SIZE
// #   define BUFF_SIZE (4096)
// # endif
# define MAX_FD 256 + 1							// launchctl limit maxfiles // ulimit -n //

# include <fcntl.h>
# include "libft/libft.h"

 int get_next_line(const int fd, char **line);

#endif
