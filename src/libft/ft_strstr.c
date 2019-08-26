/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:22:04 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/26 17:34:21 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*s;
	int		len;
	int		i;
	int		j;

	s = (char*)s1;
	len = ft_strlen(s2);
	i = 0;
	j = 0;
	if (len == 0)
		return (s);
	while (s[i] != '\0')
	{
		if (s[i] == s2[j])
		{
			while (s[i++] == s2[j++])
				if (j == len)
					return (&s[i - j]);
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}
