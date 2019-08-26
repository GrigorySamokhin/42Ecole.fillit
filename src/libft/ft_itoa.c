/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:04:31 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 19:06:41 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(int n)
{
	int			size;

	size = 1;
	if (n < 0)
	{
		n = n * (-1);
		size++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char		*ft_rev(char *s)
{
	int			i;
	int			j;
	char		c;

	i = 0;
	j = ft_strlen(s) - 1;
	if (s[i] == '-')
		i++;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	char		*s;
	int			i;
	int			size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	size = ft_size(n);
	s = ft_strnew((size) + 1);
	if (s == 0)
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		i++;
		n = n * (-1);
	}
	while (i < size)
	{
		s[i++] = (n % 10) + '0';
		n = n / 10;
	}
	s[i] = '\0';
	ft_rev(s);
	return (s);
}
