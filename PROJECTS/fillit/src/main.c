/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:22:26 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/07 20:28:52 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

int main(int argc, char **argv)
{
	char		*file_path;
	int			fd;
	t_tetri		*list;

	if (argc == 2)
	{
		ft_putendl("Success");
		file_path = argv[1];

		fd = open(file_path, O_RDONLY);
		if (fd != -1)
		{
			list = read_input(fd);
			if (list)
			{
				ft_printlist(list);
				ft_deletelist(list);
			}
			else
				ft_putendl("No list(\n");
		}
		else
		{
			ft_putendl("Error");
			return (0);
		}
		if (close(fd) == -1)
		{
			ft_putendl("Error");
			return (0);
		}
		return (1);
	}
	else
	{
		ft_putendl("Error");
		return (0);
	}
}
