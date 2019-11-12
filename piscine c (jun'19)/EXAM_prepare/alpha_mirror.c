/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 12:53:59 by edoll             #+#    #+#             */
/*   Updated: 2019/06/26 13:30:54 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	char let;
	
	i = 0;
	if(argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				let = 'Z' - argv[1][i] + 'A';
				write(1, &let, 1);
			}
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				let = 'z' - argv[1][i] + 'a';
				write(1, &let, 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
