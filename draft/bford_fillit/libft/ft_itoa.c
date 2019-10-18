/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:07:48 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int len;

	len = ((n < 0) ? 1 : 0);
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long int	copy;
	char		*s;
	int			len;

	copy = (long)n;
	len = ft_nbrlen(n) + 1;
	if (!(s = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	copy *= ((n < 0) ? -1 : 1);
	len--;
	s[len--] = '\0';
	while (len >= 0)
	{
		s[len--] = copy % 10 + '0';
		copy /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
