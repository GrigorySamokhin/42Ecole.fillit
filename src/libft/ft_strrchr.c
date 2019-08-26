/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 16:53:46 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 12:43:58 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;
	char	d;

	s = (char*)str;
	i = ft_strlen(s);
	d = (char)c;
	while (i != -1)
	{
		if (s[i] == d)
			return (&s[i]);
		i--;
	}
	return (0);
}
