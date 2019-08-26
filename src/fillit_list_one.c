/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_kist_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:21:57 by hwiegand          #+#    #+#             */
/*   Updated: 2019/05/11 18:54:27 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*kvadrat(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src && src[i] == d && src[i + 1] == d && src[i + n] == d \
		&& src[i + 1 + n] == d) || (c == '.'))
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + n] = c;
		src[i + n + 1] = c;
		return (src);
	}
	return (NULL);
}

char		*palka(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src && src[i] == d && src[i + n] == d && src[i + n + n] == d \
		&& src[i + n + n + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n + n] = c;
		src[i + n + n + n] = c;
		return (src);
	}
	return (NULL);
}

char		*palka_g(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	n = 0;
	if ((src && src[i] == d && src[i + 1] == d && src[i + 2] == d \
		&& src[i + 3] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + 2] = c;
		src[i + 3] = c;
		return (src);
	}
	return (NULL);
}

char		*krivaja_1(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src && src[i] == d && src[i + n] == d && src[i + n + n] == d \
		&& src[i + n + n + 1] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n + n] = c;
		src[i + n + n + 1] = c;
		return (src);
	}
	return (NULL);
}

char		*krivaja_2(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src && src[i] == d && src[i + 1] == d && src[i + n + 1] == d \
		&& src[i + n + n + 1] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + n + 1] = c;
		src[i + n + n + 1] = c;
		return (src);
	}
	return (NULL);
}
