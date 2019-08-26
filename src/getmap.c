/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:56:49 by hwiegand          #+#    #+#             */
/*   Updated: 2019/06/01 18:06:06 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*getmap(int dlinadon, char *src)
{
	int		i;
	int		j;
	int		razmer;

	razmer = dlinadon * dlinadon + dlinadon + 1;
	i = 0;
	while (i < (razmer - 1))
	{
		j = 0;
		while (j < ((razmer - 1) / dlinadon - 1))
		{
			src[i] = '.';
			j++;
			i++;
		}
		src[i] = '\n';
		i++;
	}
	src[i] = '\0';
	return (src);
}
