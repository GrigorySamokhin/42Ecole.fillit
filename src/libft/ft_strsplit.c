/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:38:07 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 18:36:07 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(char **res, int k)
{
	while (k > 0)
	{
		k--;
		ft_strdel(&res[k]);
	}
	ft_strdel(res);
}

static void		ft_mem(char **res, char const *s, char c, int x)
{
	int			j;
	int			k;

	k = 0;
	while (s[x])
	{
		j = 0;
		if (s[x] != c)
		{
			while (s[x])
			{
				if (s[x + 1] == c || s[x + 1] == '\0')
				{
					if ((res[k] = (char *)malloc(j + 2)) == NULL)
						ft_free(res, k);
					k++;
					break ;
				}
				x++;
				j++;
			}
		}
		x++;
	}
}

static void		ft_ins(char **res, char const *s, char c)
{
	int			j;
	int			i;
	int			k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				res[k][j++] = s[i];
				res[k][j] = '\0';
				k++;
				break ;
			}
			res[k][j++] = s[i++];
		}
		i++;
	}
	res[k] = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			k;
	char		**res;
	int			x;

	i = 0;
	k = 0;
	x = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			k++;
		i++;
	}
	res = (char **)malloc(sizeof(char *) * (k + 1));
	if (res == NULL)
		return (NULL);
	ft_mem(res, s, c, x);
	ft_ins(res, s, c);
	return (res);
}
