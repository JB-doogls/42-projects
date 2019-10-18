/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_array_great_again.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:43:55 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 19:43:49 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../libft/libft.h"

void				ft_make_array_great_again(int *ar, char **s)
{
	ar[0] = (ft_strchr(*s, '#') - *s) / 4;
	ar[1] = (ft_strchr(*s, '#') - *s) % 4;
	ar[2] = (ft_ptrofc(*s, '#', 2) - *s) / 4 - ar[0];
	ar[3] = (ft_ptrofc(*s, '#', 2) - *s) % 4 - ar[1];
	ar[4] = (ft_ptrofc(*s, '#', 3) - *s) / 4 - ar[0];
	ar[5] = (ft_ptrofc(*s, '#', 3) - *s) % 4 - ar[1];
	ar[6] = (ft_ptrofc(*s, '#', 4) - *s) / 4 - ar[0];
	ar[7] = (ft_ptrofc(*s, '#', 4) - *s) % 4 - ar[1];
}
