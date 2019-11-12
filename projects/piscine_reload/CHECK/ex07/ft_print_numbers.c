/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:41:53 by edoll             #+#    #+#             */
/*   Updated: 2019/09/06 12:46:35 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthcar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
		ft_puthcar(digit++);
}

int		main()
{
	ft_print_numbers();
	return (0);
}
