/*
** A test print function
*/

void		print_tetri(t_point *shape, char block_letter)
{
	int		j;
	int		i;
	char	tetri_string[NUM_CHARS_IN_BLOCK + 1];

	tetri_string[NUM_CHARS_IN_BLOCK] = '\0';
	j = 0;
	while (j < NUM_CHARS_IN_BLOCK)
	{
		if ((j + 1) % 5 == 0)
			tetri_string[j] = '\n';
		else
			tetri_string[j] = '.';
		++j;
	}
	i = 0;
	while (i < POINTS_IN_SHAPE)
	{
		tetri_string[shape[i].x + (shape[i].y) * 5] = block_letter;
		++i;
	}
	ft_putstr(tetri_string);
	ft_putchar('\n');
}

void		ft_printlist(t_tetri *node)
{
	while (node->next)
	{
		print_tetri(node->shape, node->letter);
		node = node->next;
	}
	print_tetri(node->shape, node->letter);
}
