/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:25:51 by hwiegand          #+#    #+#             */
/*   Updated: 2019/05/11 15:25:54 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			g_step = 0;

char				*map(int fd)
{
	t_str		*list_tet;
	char		*map;
	int			size;
	char		letter;

	letter = 'A';
	if (!(list_tet = ft_open(fd)))
		return (0);
	size = dlinadon(list_tet);
	while (1)
	{
		map = ft_strnew(size * size + size);
		map = getmap(size, map);
		g_step = size + 1;
		if (podbor((list_tet), map, letter))
		{
			ft_lstdelstrone(&list_tet);
			return (map);
		}
		size++;
		ft_strdel(&map);
	}
	ft_lstdelstrone(&list_tet);
	return (NULL);
}

int					podbor(t_str *fig, char *map, char letter)
{
	char			*loc_map;
	int				pos_x;
	int				n;

	loc_map = map;
	pos_x = 0;
	if (fig == NULL)
		return (1);
	n = g_step * g_step + g_step - 3;
	if (fig && map)
		while (pos_x <= n)
		{
			if ((fig->f(loc_map, pos_x, g_step, letter)))
			{
				if ((podbor((fig->next), loc_map, (letter + 1))))
					return (1);
				fig->f(loc_map, pos_x, g_step, '.');
			}
			pos_x++;
		}
	return (0);
}

void				fillit_usage(char *argv0)
{
	ft_putstr("usage: ");
	ft_putstr(argv0);
	ft_putstr(" [fillit_file]\n");
}

int					main(int argc, char **argv)
{
	int				fd;
	char			*map_print;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (!(map_print = map(fd)))
			ft_putstr("error\n");
		else
		{
			ft_putstr(map_print);
			ft_strdel(&map_print);
		}
		close(fd);
	}
	else
		fillit_usage(argv[0]);
	return (0);
}
