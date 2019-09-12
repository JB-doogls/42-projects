/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 19:13:33 by edoll             #+#    #+#             */
/*   Updated: 2019/06/20 20:40:25 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		ft_display_file(char *filename)
{
	int		fd;
	int		res;
	char	buf[BUFFER_SIZE + 1];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Can't open file\n", 16);
		return (0);
	}
	while ((res = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[res] = '\0';
		ft_putstr(buf);
	}
	if (res < 0)
	{
		write(1, "Can't read file\n", 16);
		return (0);
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	if (!(input_is_valid(argc)))
		return (0);
	ft_display_file(argv[1]);
	return (0);
}
