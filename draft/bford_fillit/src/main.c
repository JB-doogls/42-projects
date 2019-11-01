/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdoogls <jbdoogls@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:53:04 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 08:44:19 by jbdoogls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../includes/fillit.h"
#include "../libft/libft.h"

t_fil	*g_l;
int g_a[19][6] = {
	{0, 1, 1, 0, 1, 1}, {1, 0, 2, 0, 3, 0},
	{0, 1, 0, 2, 0, 3}, {0, 1, 1, 0, 2, 0},
	{0, 1, 0, 2, 1, 2}, {1, 0, 2, -1, 2, 0},
	{1, 0, 1, 1, 1, 2}, {0, 1, 1, 1, 2, 1},
	{1, -2, 1, -1, 1, 0}, {1, 0, 2, 0, 2, 1},
	{0, 1, 0, 2, 1, 0}, {1, 0, 1, 1, 2, 1},
	{0, 1, 1, -1, 1, 0}, {1, -1, 1, 0, 2, -1},
	{0, 1, 1, 1, 1, 2}, {1, 0, 1, 1, 2, 0},
	{1, -1, 1, 0, 2, 0}, {1, -1, 1, 0, 1, 1},
	{0, 1, 0, 2, 1, 1}};

void	ft_check_kek(char **m, int x, t_fil *l, int c)
{
	*(*m + x) = c;
	*(*(m + g_a[l->n][0]) + x + g_a[l->n][1]) = c;
	*(*(m + g_a[l->n][2]) + x + g_a[l->n][3]) = c;
	*(*(m + g_a[l->n][4]) + x + g_a[l->n][5]) = c;
}

char	**ft_greatmap(char **map, t_fil *l, char c, int z)				//	while (!(ft_greatmap(map, g_l, 'A', z)))
{
	int		y;
	int		x;
	char	**cpy;

	y = -1;
	while (++y < z)
	{
		x = -1;
		while (++x < z)
			if (map[y][x] == '.' && ft_check_borders(l, x, y, z) &&				//	   [		x		  ] [		y		 ]
			map[ y + g_a[l->n][0]] [x + g_a[l->n][1]] == '.' &&					//	map[ y + g_a[l->n][0] ] [x + g_a[l->n][1] ]
			map[y + g_a[l->n][2]][x + g_a[l->n][3]] == '.' &&
			map[y + g_a[l->n][4]][x + g_a[l->n][5]] == '.')
			{
				ft_check_kek(&(map[y]), x, l, c);
				if (l->next && (cpy = ft_greatmap(map, l->next, c + 1, z)))
					return (cpy);
				if (!l->next)
					return (map);
				ft_check_kek(&(map[y]), x, l, '.');
			}
	}
	return (NULL);
}

int		ft_init(char **s)
{
	int				ar[8];
	int				i;
	t_fil			*ptr;
	static char		c;

	i = 0;
	if (!c)
		c = 'A' - 1;
	if (++c > 'Z' || ft_numofc(*s, '#') != 4)
		return (-1);
	if (g_l)
		ptr = g_l;
	ft_make_array_great_again(ar, s);
	while (i < 19)
	{
		if (!(ar[2] - g_a[i][0]) && !(ar[3] - g_a[i][1]) &&
		!(ar[4] - g_a[i][2]) && !(ar[5] - g_a[i][3]) &&
		!(ar[6] - g_a[i][4]) && !(ar[7] - g_a[i][5]))
			return (ft_lstnewornot(&g_l, &ptr, c, i));
		i++;
	}
	return (-1);
}

int		res_of_reading(char **s_block, int r, int i)
{
	if (*s_block)
	{
		free(*s_block);
		return (-1);
	}
	if (i != 5 && r == 0)
		return (0);
	return (-1);
}

int		reading_file(int fd)
{
	char	*s_block;
	char	buff[5];
	int		r;
	int		i;

	s_block = NULL;
	if (!(i = 5) && (fd < 0 || read(fd, buff, 0) < 0))
		return (-1);
	while ((r = read(fd, buff, i)) && r == i)
		if (i == 5 && (buff[0] == '.' || buff[0] == '#') && (buff[1] == '.'
		|| buff[1] == '#') && (buff[2] == '.' || buff[2] == '#') &&
		(buff[3] == '.' || buff[3] == '#') && buff[4] == '\n' &&
		!(buff[4] = '\0'))
		{
			buff[4] = '\0';
			if (!(ft_strduporjoin(&s_block, buff)))
				return (-1);
			if ((ft_strlen(s_block) == 16 && (i = 1)) &&
			(ft_init(&s_block) == -1 || !ft_strdel(&s_block)))
				return (-1);
		}
		else if (!(i == 1 && buff[0] == '\n' && (i = 5)))
			return (-1);
	return (res_of_reading(&s_block, r, i));
}

int		main(int argc, char **argv)
{
	int		result;
	char	**map;
	int		z;

	z = open(argv[1], O_RDONLY);
	if (argc != 2 || z < 0 || (result = reading_file(z)))
	{
		ft_putstr_fd("error\n", 1);
		return (0);
	}
	close(z);
	z = ft_min_square(g_l);
	if (!(map = ft_makemap(z, &map)))
		return (-1);
	while (!(ft_greatmap(map, g_l, 'A', z)))
		if (!(map = ft_makemap(++z, &map)))
			return (-1);
	z = 0;
	while (map[z])
	{
		ft_putstr(map[z]);
		free(map[z++]);
	}
	free(map);
	return (0);
}


/*
**
**
**
*/

int					ft_min_square(t_fil *lst)
{
	int	min;
	int	x;

	x = 0;
	min = 4;
	while (lst->next)
	{
		lst = lst->next;
		min += 4;
	}
	while (x * x < min)
		x++;
	return (x);
}

/*
**
*/

char	**ft_makemap(int z, char ***map)
{
	int		y;
	int		x;

	if (*map)
		ft_clear_map(map);
	y = 0;
	if (!(*map = (char **)malloc(sizeof(char *) * (z + 1))))
		return (NULL);
	(*map)[z] = NULL;
	while (y < z)
	{
		x = 0;
		if (!((*map)[y] = (char *)malloc(sizeof(char) * (z + 2))))
		{
			ft_clear_map(map);
			return (NULL);
		}
		(*map)[y][z + 1] = '\0';
		(*map)[y][z] = '\n';
		while (x < z)
			(*map)[y][x++] = '.';
		y++;
	}
	return (*map);
}

/*
**
*/

int		ft_check_borders(t_fil *l, int x, int y, int z)
{
	return (y + g_a[l->n][0] < z && y + g_a[l->n][0] >= 0 &&
			x + g_a[l->n][1] < z && x + g_a[l->n][1] >= 0 &&
			y + g_a[l->n][2] < z && y + g_a[l->n][2] >= 0 &&
			x + g_a[l->n][3] < z && x + g_a[l->n][3] >= 0 &&
			y + g_a[l->n][4] < z && y + g_a[l->n][4] >= 0 &&
			x + g_a[l->n][5] < z && x + g_a[l->n][5] >= 0);
}

/*
**
*/

void				ft_make_array_great_again(int *ar, char **s)
{
	ar[0] = (ft_strchr(*s, '#') - *s) / 4;
	ar[1] = (ft_strchr(*s, '#') - *s) % 4;
	ar[2] = (ft_ptrofc(*s, '#', 2) - *s) / 4 - ar[0];
	ar[3] = (ft_ptrofc(*s, '#', 2) - *s) % 4 - ar[1];
	ar[4] = (ft_ptrofc(*s, '#', 3) - *s) / 4 - ar[0];
	ar[5] = (ft_ptrofc(*s, '#', 3) - *s) % 4 - ar[1];
	ar[6] = (ft_ptrofc(*s, '#', 4) - *s) / 4 - ar[0];
	ar[7] = (ft_ptrofc(*s, '#', 4) - *s) % 4 - ar[1];
}

/*
**
*/

/*
**
*/

void	ft_clear_map(char ***map)
{
	char **cpy;

	cpy = *map;
	while (*cpy)
		free(*cpy++);
	free(*map);
}
