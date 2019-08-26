/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 15:50:54 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/26 14:59:12 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *str, int c)
{
	int		i;
	char	*dst;

	dst = (char*)str;
	i = 0;
	while (dst[i] != (char)c)
	{
		if (!dst[i])
			return (NULL);
		i++;
	}
	return ((char *)&dst[i]);
}
