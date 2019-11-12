/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:31:50 by edoll             #+#    #+#             */
/*   Updated: 2019/06/27 15:34:56 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;
	int flag;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != 0)
		{
			flag = 1;
			j = 0;
			while (j != i)
			{
				if (argv[1][j] == argv[1][i])
					flag = 0;
				j++;
			}
			if (flag && argv[1][i])
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i] != 0)
		{
			flag = 1;
			j = 0;
			while (argv[1][j] != '\0')
			{
				if (argv[2][i] == argv[1][j])
					flag = 0;
				j++;
			}
			j = 0;
			while (j != i)
			{
				if (argv[2][j] == argv[2][i])
					flag = 0;
				j++;
			}
			if (flag)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
