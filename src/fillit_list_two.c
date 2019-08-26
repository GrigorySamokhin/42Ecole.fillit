/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_kist_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:21:57 by hwiegand          #+#    #+#             */
/*   Updated: 2019/05/11 18:54:27 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*krivaja_3(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + 1] == d && src[i + 2] == d \
		&& src[i + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + 2] = c;
		src[i + n] = c;
		return (src);
	}
	return (NULL);
}

char		*krivaja_4(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n - 2] == d && src[i + n - 1] == d \
		&& src[i + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + (n - 2)] = c;
		src[i + (n - 1)] = c;
		src[i + n] = c;
		return (src);
	}
	return (NULL);
}

char		*krivaja_5(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + 1] == d && src[i + n] == d \
		&& src[i + n + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + n] = c;
		src[i + n + n] = c;
		return (src);
	}
	return (NULL);
}

char		*krivaja_6(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n] == d && src[i + n + n - 1] == d \
		&& src[i + n + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n + n - 1] = c;
		src[i + n + n] = c;
		return (src);
	}
	return (NULL);
}

char		*krivaja_7(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n] == d && src[i + n + 1] == d \
		&& src[i + n + 2] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n + 1] = c;
		src[i + n + 2] = c;
		return (src);
	}
	return (NULL);
}
