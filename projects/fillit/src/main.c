/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:22:26 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/21 06:24:02 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		main(int ac, char **av)
{
	t_tetri		*list;
	int			fd;
	char		*file_path;

	if (ac == 2)
	{
		file_path = av[1];
		fd = open(file_path, O_RDONLY);
		if ((fd != -1) && (list = ft_read_input(fd)))
		{
			ft_solving(list);
			ft_deletelist(list);
			if (close(fd) == -1)
				ft_putendl("error");
		}
		else
			ft_putendl("error");
	}
	else
		ft_putendl("usage: 'file_to_read' (use with one argument)");
	return (0);
}
