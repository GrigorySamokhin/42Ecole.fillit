/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:54:41 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/26 14:40:37 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	char			*src;
	char			d;
	size_t			i;

	i = 0;
	src = (char *)s;
	d = (char)c;
	while (i < n)
	{
		if (src[i] == d)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
