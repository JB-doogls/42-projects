/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:24:16 by bford             #+#    #+#             */
/*   Updated: 2019/09/24 13:58:15 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fil	*ft_lst_new_f(char c, int n)
{
	t_fil	*new;

	if (!(new = (t_fil *)malloc(sizeof(t_fil))))
		return (NULL);
	new->c = c;
	new->n = n;
	new->next = NULL;
	return (new);
}
