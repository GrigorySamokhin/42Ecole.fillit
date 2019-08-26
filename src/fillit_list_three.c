/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_kist_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:21:57 by hwiegand          #+#    #+#             */
/*   Updated: 2019/05/11 18:54:27 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*krivaja_8(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + 1] == d && src[i + 2] == d \
		&& src[i + 2 + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + 2] = c;
		src[i + 2 + n] = c;
		return (src);
	}
	return (NULL);
}

char		*zigzag_1(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n] == d && src[i + n + 1] == d \
		&& src[i + 1 + n + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n + 1] = c;
		src[i + 1 + n + n] = c;
		return (src);
	}
	return (NULL);
}

char		*zigzag_2(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + 1] == d && src[i + n - 1] == d \
		&& src[i + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + n - 1] = c;
		src[i + n] = c;
		return (src);
	}
	return (NULL);
}

char		*zigzag_3(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n] == d && src[i + n - 1] == d \
		&& src[i + n + n - 1] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n - 1] = c;
		src[i + n + n - 1] = c;
		return (src);
	}
	return (NULL);
}

char		*zigzag_4(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + 1] == d && src[i + n + 1] == d \
		&& src[i + n + 2] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + n + 1] = c;
		src[i + n + 2] = c;
		return (src);
	}
	return (NULL);
}
