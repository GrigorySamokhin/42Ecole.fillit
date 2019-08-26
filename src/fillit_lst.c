/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 14:19:03 by hwiegand          #+#    #+#             */
/*   Updated: 2019/05/10 14:19:06 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		ft_lstdelstr(t_str **fig)
{
	if (fig)
	{
		free(*fig);
		*fig = NULL;
	}
}

void		ft_lstdelstrone(t_str **fig)
{
	t_str	**tmp;

	tmp = fig;
	while ((*tmp)->next)
		ft_lstdelstrone(&(*tmp)->next);
	ft_lstdelstr(&(*tmp));
}

void		ft_lstend(t_str **alst, t_str *new)
{
	t_str	*tmp;

	tmp = *alst;
	if (tmp == NULL)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
