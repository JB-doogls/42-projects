/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:58:11 by edoll             #+#    #+#             */
/*   Updated: 2019/11/08 21:12:16 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# define NUM_CHARS_IN_BLOCK_WITH_NEWLINE 21
# define NUM_CHARS_IN_BLOCK 20
# define MAX_NUM_BLOCKS 26
# define POINTS_IN_SHAPE 4

typedef struct	s_point
{
	unsigned char	x;
	unsigned char	y;
}				t_point;

typedef struct	s_tetri
{
	t_point			*shape;
	char			letter;
	struct s_tetri	*next;
}				t_tetri;

t_tetri			*read_input(int fd);
int				save_tetri(char *block, char block_letter, t_tetri *list);
t_tetri			*ft_createlist(t_point const *shape, char letter);
int				ft_addnode(t_point *shape, char letter, t_tetri *last_node);
t_tetri			*ft_deletelist(t_tetri *list_head);
void			print_tetri(t_point *shape, char block_letter);
void			ft_printlist(t_tetri *node);
int				ft_solving(t_tetri *list);
char			**ft_make_map(char ***map, int map_size);
char			**ft_backtrack_algo(char **map, t_tetri *list, int map_size);
int				ft_check_space_for_shape(t_tetri *lt, char **map, int x, int y);
void			ft_put_shape(t_tetri *lt, char **map, int x, int y);
void			ft_del_shape(t_tetri *list, char **map, int x, int y);
void			ft_clear_map(char ***map);
int				ft_smallest_square(t_tetri *list);

#endif
