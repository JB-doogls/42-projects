/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 16:56:28 by mhill             #+#    #+#             */
/*   Updated: 2019/06/09 20:24:12 by mhill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char leftsign, char middlesign, char rightsign)
{
	int i;

	i = 1;
	ft_putchar(leftsign);
	while (++i < x)
		ft_putchar(middlesign);
	if (x > 1)
		ft_putchar(rightsign);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'C');
		j = 1;
		while (++j < y)
		{
			print_line(x, 'B', ' ', 'B');
		}
		if (y > 1)
		{
			print_line(x, 'A', 'B', 'C');
		}
	}
}
