/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:58:11 by edoll             #+#    #+#             */
/*   Updated: 2019/11/01 10:23:06 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define MIN_SQ_SIZE 2

typedef struct	s_list_fil
{
	int		x;
	int		y;
	struct	s_list_fil *next;
}				t_fil;


// typedef struct		s_tetri
// {
// 	int		 		shape[8];
// 	struct s_tetri 	*next;
// }					t_tetri;

#endif
