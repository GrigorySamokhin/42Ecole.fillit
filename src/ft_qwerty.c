/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qwerty.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 12:12:41 by hwiegand          #+#    #+#             */
/*   Updated: 2019/06/01 18:00:43 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_str			*ft_qwerty(char *(*f)(char *, int, int, char), \
		int width, int heights)
{
	struct s_str		*new;

	new = (t_str*)malloc(sizeof(t_str));
	if (new == 0)
		return (NULL);
	new->f = f;
	new->width = width;
	new->heights = heights;
	new->next = NULL;
	return (new);
}
