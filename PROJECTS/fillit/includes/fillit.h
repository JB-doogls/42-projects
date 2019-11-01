/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:58:11 by edoll             #+#    #+#             */
/*   Updated: 2019/11/01 21:01:10 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define MIN_SQ_SIZE 2

typedef struct		s_tetri
{
	int					shape[8];
	char				c;
	struct s_tetri		*next;
}					t_tetri;


// typedef struct		s_tetri
// {
// 	int		 		shape[8];
// 	struct s_tetri 	*next;
// }					t_tetri;

#endif
