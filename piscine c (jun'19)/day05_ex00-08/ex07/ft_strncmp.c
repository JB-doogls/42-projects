/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:39:04 by edoll             #+#    #+#             */
/*   Updated: 2019/06/11 22:08:29 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i] && s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] != s2[i] && s1[i] > s2[i])
			return (-1 * (s1[i] - s2[i]));
		i++;
	}
	while (i = n)
	{
		if (s1[i] == s2[i])
			return (0);
		else
			return (s1[i] - s2[i]);
	}
}
