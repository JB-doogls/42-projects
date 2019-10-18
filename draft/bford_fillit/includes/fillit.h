/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:37:20 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 19:06:40 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"

int				g_a[19][6];

void				ft_make_array_great_again(int *ar, char **s);
int					ft_min_square(t_fil *lst);
char				**ft_makemap(int z, char ***map);
void				ft_clear_map(char ***map);
int					ft_check_borders(t_fil *l, int x, int y, int z);

#endif
