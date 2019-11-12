/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:35:18 by edoll             #+#    #+#             */
/*   Updated: 2019/06/27 18:27:53 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char c;
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int		ft_atoi(char *str)
{
	int res;

	res = 0;
	if (*str == ' ' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}

int		is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i < nbr)
	{
		if ((nbr % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main (int argc, char **argv)
{
	int nbr;
	int sum;

	nbr = 0;
	if (argc == 2)
	{
		if (!(nbr = ft_atoi(argv[1])))
			write(1, "0\n", 2);
		sum = 0;
		while (nbr > 1)
		{
			if (is_prime(nbr--))
				sum += nbr + 1;
		}
		ft_putnbr(sum);
		write(1,"\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
