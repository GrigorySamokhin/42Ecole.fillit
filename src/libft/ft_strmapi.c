/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:30:49 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/25 19:47:22 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*d;
	int		j;

	j = 0;
	if (!s || !f)
		return (0);
	d = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (d == 0)
		return (0);
	while (s[j])
	{
		d[j] = (f)(j, s[j]);
		j++;
	}
	d[j] = '\0';
	return (d);
}
