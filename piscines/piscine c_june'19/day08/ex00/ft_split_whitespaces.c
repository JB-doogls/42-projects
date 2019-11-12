/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 05:00:31 by edoll             #+#    #+#             */
/*   Updated: 2019/06/14 07:30:00 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	char **arr;
	int len;
	int word;
	int start;
	int fin;

	if (*str == '\0')
		return (0);
	while(*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n') // find space //
			*str++;
		else if
			start = *str; // yes???? // find space //
		while(*str != ' ' || *str != '\t' || *str != '\n') // calculate symbols //
		{
			len++;
			*str++;
			if (*str == ' ' || *str == '\t' || *str == '\n') // find the end of word (last symb) //
			{
				word++;
				fin = *str;
			}
		}
	}
	arr = (char **)malloc(sizeof(char) * (len + word));
	while(start < fin)
	{
		*arr[0][

	
	
	
	arr = (char **)malloc(sizeof(char) * (len + word))





				*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str >= 'z')
		{
