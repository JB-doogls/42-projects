/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:58:11 by edoll             #+#    #+#             */
/*   Updated: 2019/11/03 05:52:49 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <stdio.h>		// DELETE //

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# include "../libft/libft.h"

# define MIN_SQ_SIZE 2

typedef struct		s_tetri
{
	int					shape[8];
	char				letter;
	struct s_tetri		*next;
}					t_tetri;

int     ft_solving(t_tetri *list);
char    **ft_make_map(char ***map, int map_size);
char    **ft_backtrack_algo(char **map, t_tetri *list, int map_size);
int     ft_check_space_for_shape(t_tetri *lt, char **map, int x, int y, int map_size);
void    ft_put_shape(t_tetri *lt, char **map, int x, int y);
void    ft_del_shape(t_tetri *list, char **map, int x, int y);

#endif

// typedef struct		s_tetri
// {
// 	int		 		shape[8];
// 	struct s_tetri 	*next;
// }					t_tetri;

