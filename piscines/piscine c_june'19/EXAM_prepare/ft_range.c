/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 18:58:11 by edoll             #+#    #+#             */
/*   Updated: 2019/06/27 19:37:46 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	 i;
	int *arr;
	
	if (start > end)
		arr = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		arr = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		if (start > end)
		{
			arr[i++] = start;
			start--;
		}
		else if (start < end)
		{
			arr[i++] = start;
			start++;
		}
	}
	arr[i++] = start;
	arr[i] = '\0';
	return (arr);
}
