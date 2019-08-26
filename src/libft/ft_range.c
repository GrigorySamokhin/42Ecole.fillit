/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 11:54:29 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/26 12:54:38 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			*ft_range(int min, int max)
{
	int		i;
	int		k;
	int		*str;

	if (min >= max)
		return (0);
	str = (int*)malloc((max - min) * sizeof(int));
	if (str == 0)
		return (0);
	i = min;
	k = 0;
	while (i < max)
	{
		str[k] = i;
		k++;
		i++;
	}
	return (str);
}
