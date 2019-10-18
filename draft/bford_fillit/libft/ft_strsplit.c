/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:56:04 by bford             #+#    #+#             */
/*   Updated: 2019/09/26 18:01:55 by kpsylock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_do_word(char **array, const char *s, int len, int w)
{
	if (!(array[w] = ft_strnew(len)))
	{
		w--;
		while (w >= 0)
			free(array[w--]);
		return (0);
	}
	else
		array[w] = ft_strncpy(array[w], s, len);
	return (1);
}

static int	ft_words(char const *s, char c)
{
	int		words;

	words = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			words++;
		s++;
	}
	return (words);
}

static int	ft_words_array(const char *s, char **array, char c)
{
	int		str;
	int		end;
	int		w;

	w = 0;
	str = 0;
	while (s[str])
	{
		if (s[str] != c)
		{
			end = str + 1;
			while (s[end] != c && s[end] != '\0')
				end++;
			if (!(ft_do_word(array, s + str, end - str, w++)))
				return (0);
			str = end;
			continue;
		}
		str++;
	}
	array[w] = NULL;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	if (!(ft_words_array(s, array, c)))
		free(array);
	return (array);
}
