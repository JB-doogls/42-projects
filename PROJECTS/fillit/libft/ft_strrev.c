/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:07:44 by edoll             #+#    #+#             */
/*   Updated: 2019/09/26 18:16:48 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		ln;
	char	temp;

	i = 0;
	ln = ft_strlen(str);
	while (i < (ln / 2))
	{
		temp = str[i];
		str[i] = str[ln - i - 1];
		str[ln - i - 1] = temp;
		i++;
	}
	str[ln] = '\0';
	return (str);
}
