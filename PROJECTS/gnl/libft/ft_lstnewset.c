/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:04:40 by jbdoogls          #+#    #+#             */
/*   Updated: 2019/10/18 11:50:30 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gnl   *ft_lstnewset(int fd)
{
    	t_gnl	*new;

	if (!(new = (t_gnl *)malloc(sizeof(t_gnl) * 1)))
		return (NULL);
	new->content = NULL;
	new->fd = fd;
	new->next = NULL;
	return (new);
}
