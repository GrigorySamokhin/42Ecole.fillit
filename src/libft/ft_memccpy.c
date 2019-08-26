/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:49:38 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/26 15:54:30 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	i = 0;
	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	while (i < n)
	{
		x[i] = y[i];
		if (y[i] == (unsigned char)c)
			return (&x[i + 1]);
		i++;
	}
	return (0);
}
