/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 13:44:27 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/25 19:41:23 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*d;

	d = (unsigned char *)malloc(size * sizeof(*d));
	if (d == 0)
		return (0);
	ft_bzero(d, size);
	return (d);
}
