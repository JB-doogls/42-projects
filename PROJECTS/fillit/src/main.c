/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:22:26 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/08 21:11:14 by edoll            ###   ########.fr       */
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
		if (fd != -1)
		{
			list = read_input(fd);
			if (list)
			{
				ft_solving(list);
				ft_deletelist(list);
			}
			if (!list)
				ft_putendl("error");
			if (close(fd) == -1)
			{
				ft_putendl("Error closing");
				return (0);
			}
		}
		else
		{
			ft_putendl("Error opening");
			return (0);
		}
	}
	else
	{
		ft_putendl("usage: 'file_to_read' (use with one argument)");
		return (0);
	}
	return (0);
}
