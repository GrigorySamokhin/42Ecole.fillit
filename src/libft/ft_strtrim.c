/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:17:32 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 16:38:25 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		x;
	int		k;
	char	*d;

	i = 0;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s) - 1;
	x = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > 0)
		j--;
	k = i;
	d = (char *)malloc(sizeof(char) * ((j != 0) ? (j - i + 2) : 2));
	if (d == NULL)
		return (NULL);
	while (x < (j - k + 1))
	{
		d[x++] = s[i++];
	}
	d[x] = '\0';
	return (d);
}
