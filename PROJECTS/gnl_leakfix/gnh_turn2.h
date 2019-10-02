/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnh_turn2.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:59:45 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/10/02 20:24:05 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_TURN2_H
# define GNL_TURN2_H

# define BUFF_SIZE (4096)
# define MAX_FD (256 + 1)

# include <fcntl.h>
# include "libft/libft.h"

int             get_next_line(const int fd, char **line);

#endif
