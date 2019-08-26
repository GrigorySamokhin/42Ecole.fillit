/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 12:44:46 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/26 12:50:18 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			ft_power(int nb, int power)
{
	int		i;
	int		pow;

	i = 0;
	pow = 1;
	if (power <= 0)
		return (0);
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}
