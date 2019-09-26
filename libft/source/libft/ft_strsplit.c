/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:38:28 by edoll             #+#    #+#             */
/*   Updated: 2019/09/26 19:48:04 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c)
{
	int		ct;

	ct = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			ct++;
			while (*s && *s != c)
				s++;
		}
	}
	return (ct);
}

static char		*get_word(const char *s, char c)
{
	size_t	ln;
	char	*word;
	int		i;

	i = 0;
	ln = 0;
	while (&s[ln] && s[ln] != c)
		ln++;
	if (!(word = (char*)malloc(sizeof(char) * (ln + 1))))
	{
		free(word);
		return (NULL);
	}
	while (*s && *s != c)
		word[i++] = *s++;
	word[i] = '\0';
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	w_ct;
	size_t	i;

	i = 0;
	if (s)
	{
		w_ct = word_count(s, c);
		if (!(tab = (char**)malloc(sizeof(char*) * (w_ct + 1))))
			return (NULL);
		while (*s)
		{
			if (*s == c)
				s++;
			else
			{
				tab[i++] = get_word(s, c); 			// i++ was on the new line //
				while (*s && *s != c)
					s++;
			}
		}
		tab[i] = NULL;
		return (tab);
	}
	return (NULL);
}
