/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 11:37:21 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 14:03:41 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int		j;
	size_t	x;

	if (*s2 == '\0')
		return ((char *)s1);
	x = 0;
	while (x < len && s1[x] != '\0')
	{
		j = 0;
		if (s1[x] == s2[j])
		{
			i = x;
			while (i < len && s2[j] != '\0' && s1[i] != '\0')
				if (s1[i++] == s2[j++])
					if (s2[j] == '\0')
						return ((char *)&s1[i - ft_strlen(s2)]);
		}
		x++;
	}
	return (NULL);
}
