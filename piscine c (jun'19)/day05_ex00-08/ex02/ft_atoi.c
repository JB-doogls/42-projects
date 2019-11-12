/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:30:57 by edoll             #+#    #+#             */
/*   Updated: 2019/06/11 21:33:24 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int sign; /* signed or not */
	int result; /* current answer */

	sign = 1;
	result = 0;
	while (*str != '\0')
	{
		while (*str > '9' && *str <= '~')
			return (result * sign);
		while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ' || *str == '+')
			str++;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			result = (*str - '0') + (result * 10);
			str++;
		}
	}
	return (result * sign);
}

int		main()
{
	char *str1 = "+217bg1";
	printf("%d\n", ft_atoi(str1));
	return (0);
}
