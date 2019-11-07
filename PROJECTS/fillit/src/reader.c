/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <edoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:41:27 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/07 20:28:53 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

/*
** Counts adjacent filled spaces (right, left, down, up) and return their
** number.
*/

int		count_adjacent(int i, char *block)
{
	int		num_adjacent;

	num_adjacent = 0;
	if ((i + 1 <= 18) && (block[i + 1] == '#'))
		++num_adjacent;
	if ((i - 1 >= 0) && (block[i - 1] == '#'))
		++num_adjacent;
	if ((i + 5 <= 18) && (block[i + 5] == '#'))
		++num_adjacent;
	if ((i - 5 >= 0) && (block[i - 5] == '#'))
		++num_adjacent;
	return (num_adjacent);
}

/*
** Checks if block is invalid.
** Checks:
** 		- only '#', '.' and '\n' chars?
** 		- exactly 4 '#' chars and 6 or 8 connections?
** 		- every 5-char line of a block ends with a '\n'?
**		- the char after the block is either a '\n' or '\0' ?
** Returns 1 if invalid, 0 if valid.
*/

int		block_invalid(char *block)
{
	int		i;
	int		num_hashes;
	int		num_connections;

	i = 0;
	num_hashes = 0;
	num_connections = 0;
	while (i < NUM_CHARS_IN_BLOCK - 1)
	{
		if (block[i] && (block[i] != '#') && (block[i] != '.') && (block[i] != '\n'))
			return (1);
		if (block[i] == '#')
		{
			++num_hashes;
			num_connections += count_adjacent(i, block);
		}
		if ((block[i] == '\n') && !((i + 1) % 5 == 0))
			return (1);
		++i;
	}
	if ((block[i + 1] != '\n') && (block[i + 1] != '\0')) /* think about this */
		return (1);
	if ((num_hashes != 4 && num_connections != 6) ||
	(num_hashes != 4 && num_connections != 8))
		return (1);
	return (0);
}

/*
** Read the file with a buffer of size 21 (one block is 16 chars of grid,
** 4 '\n's and a final '\n'). The last block (or if there's only one) should
** have 20 chars.
** Returns NULL on error, list head on success.
*/

t_tetri	*read_input(int fd)
{
	char	buffer[NUM_CHARS_IN_BLOCK_WITH_NEWLINE + 1];
	int		read_result;
	int		last_read;
	char	block_letter;
	t_tetri	*list;

	if (!(list = ft_createlist(NULL, 0)))
		return (NULL);
	block_letter = 'A';
	buffer[NUM_CHARS_IN_BLOCK_WITH_NEWLINE] = '\0';
	while ((read_result = read(fd, buffer, NUM_CHARS_IN_BLOCK_WITH_NEWLINE)))
	{
		if (!((read_result < NUM_CHARS_IN_BLOCK) || block_invalid(buffer))
		&& save_tetri(buffer, block_letter, list))
		{
			++block_letter;
			last_read = read_result;
		}
		else
		{
			ft_deletelist(list);
			return (NULL);
		}
	}
	if ((last_read != NUM_CHARS_IN_BLOCK) || ((block_letter - 1) > 'Z'))
	{
		ft_deletelist(list);
		return (NULL);
	}
	return (list);
}
