/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:43:56 by edoll             #+#    #+#             */
/*   Updated: 2019/09/09 22:56:14 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 1024

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ac == 1)
		write(2, "File name missing\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments\n", 20);
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, ret);
		}
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
