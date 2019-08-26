/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlinadon.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 14:20:09 by hwiegand          #+#    #+#             */
/*   Updated: 2019/06/01 17:20:16 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			dlinadon_help(int i, int w, int l)
{
	int j;

	j = 3;
	while (1)
	{
		if (i > 4 && i <= (j * j) && (w + l) <= (j * j))
			return (j);
		j++;
	}
	return (0);
}

int			dlinadon(t_str *fig)
{
	t_str	*tmp;
	int		l;
	int		w;
	int		i;

	l = 0;
	w = 0;
	i = 0;
	tmp = fig;
	while (tmp)
	{
		l = l + tmp->heights;
		w = w + tmp->width;
		i++;
		tmp = tmp->next;
	}
	i = i * 4;
	if (i <= 60)
		return (i = ft_sqrt(i));
	if (i == 4)
		return (2);
	return (dlinadon_help(i, w, l));
}
