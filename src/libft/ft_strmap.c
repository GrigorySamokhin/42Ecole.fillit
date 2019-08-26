/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 13:08:43 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 14:38:22 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*d;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	d = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	while (s[i])
	{
		d[i] = (f)(s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
