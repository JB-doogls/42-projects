/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 22:35:07 by edoll             #+#    #+#             */
/*   Updated: 2019/06/18 23:30:25 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_calculate(int num1, int num2, char oper)
{
	if (num1 == 0 && oper == '/')
		write(1, "Stop: division by zero", 23);
	else if (num1 == 0 && oper == '%')
		write(1, "Stop: modulo by zero", 20);
	else if (oper == '+')
		ft_putnbr(num1 + num2);
	else if (oper == '-')
		ft_putnbr(num1 - num2);
	else if (oper == '*')
		ft_putnbr(num1 * num2);
	else if (oper == '/')
		ft_putnbr(num1 / num2);
	else if (oper == '%')
		ft_putnbr(num1 % num2);
	write(1, "\n", 1);
}
