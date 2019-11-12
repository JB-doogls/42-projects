/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 19:02:15 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/06/09 20:13:46 by mhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char edgesign, char middlesign)
{
	int i;

	i = 1;
	ft_putchar(edgesign);
	while (++i < x)
		ft_putchar(middlesign);
	if (x > 1)
		ft_putchar(edgesign);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	if (x > 0 && y > 0)
	{
		print_line(x, 'o', '-');
		j = 1;
		while (++j < y)
		{
			print_line(x, '|', ' ');
		}
		if (y > 1)
		{
			print_line(x, 'o', '-');
		}
	}
}
