/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:59:37 by edoll             #+#    #+#             */
/*   Updated: 2019/09/26 14:16:55 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t ct;

	ct = 0;
	if (s1 && s2)
	{
		while (s1[ct] && s2[ct] && s1[ct] == s2[ct])
		{
			if (s1[ct] != s2[ct])
				return (0);
			ct++;
		}
		if ((!s1[ct] || !s2[ct]) && s1[ct] == s2[ct])
			return (1);
	}
	return (0);
}
