/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:01:05 by edoll             #+#    #+#             */
/*   Updated: 2019/09/04 16:24:16 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char letter;
	
	letter = 'a';
	while (letter <= 'z')
		ft_putchar(letter++);
}

int		main()
{
	ft_print_alphabet();
	return (0);
}
