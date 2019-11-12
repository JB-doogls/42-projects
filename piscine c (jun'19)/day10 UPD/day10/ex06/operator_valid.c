/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 22:40:54 by edoll             #+#    #+#             */
/*   Updated: 2019/06/18 23:41:06 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		operator_valid(char *s)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;

	s1 = "+";
	s2 = "-";
	s3 = "*";
	s4 = "/";
	s5 = "%";
	return (!ft_strcmp(s, s1) || !ft_strcmp(s, s2) || !ft_strcmp(s, s3)
		|| !ft_strcmp(s, s4) || !ft_strcmp(s, s5));
}
