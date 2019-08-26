/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 13:08:30 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 14:07:31 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int					ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*src;
	unsigned char	*dst;
	int				i;

	i = 0;
	src = (unsigned char*)s1;
	dst = (unsigned char*)s2;
	while (src[i] != '\0' && dst[i] != '\0')
	{
		if (src[i] != dst[i])
			return (src[i] - dst[i]);
		i++;
	}
	return (0);
}
