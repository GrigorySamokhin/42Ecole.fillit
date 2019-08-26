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

char		*piska_1(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n - 1] == d && src[i + n] == d \
	&& src[i + n + 1] == d) || c == '.')
	{
		src[i] = c;
		src[i + n - 1] = c;
		src[i + n] = c;
		src[i + n + 1] = c;
		return (src);
	}
	return (NULL);
}

char		*piska_2(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n - 1] == d && src[i + n] == d \
	&& src[i + n + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + n - 1] = c;
		src[i + n] = c;
		src[i + n + n] = c;
		return (src);
	}
	return (NULL);
}

char		*piska_3(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + n] == d && src[i + n + 1] == d \
	&& src[i + n + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + n] = c;
		src[i + n + 1] = c;
		src[i + n + n] = c;
		return (src);
	}
	return (NULL);
}

char		*piska_4(char *src, int i, int n, char c)
{
	char d;

	d = '.';
	if ((src[i] == d && src[i + 1] == d && src[i + 2] == d \
	&& src[i + 1 + n] == d) || c == '.')
	{
		src[i] = c;
		src[i + 1] = c;
		src[i + 2] = c;
		src[i + 1 + n] = c;
		return (src);
	}
	return (NULL);
}

t_str		*examplfull(void)
{
	t_str			*alst;

	ft_lstend(&alst, ft_qwerty(kvadrat, 2, 2));
	ft_lstend(&alst, ft_qwerty(palka, 4, 1));
	ft_lstend(&alst, ft_qwerty(palka_g, 1, 4));
	ft_lstend(&alst, ft_qwerty(krivaja_1, 3, 2));
	ft_lstend(&alst, ft_qwerty(krivaja_2, 3, 2));
	ft_lstend(&alst, ft_qwerty(krivaja_3, 2, 3));
	ft_lstend(&alst, ft_qwerty(krivaja_4, 2, 3));
	ft_lstend(&alst, ft_qwerty(krivaja_5, 3, 2));
	ft_lstend(&alst, ft_qwerty(krivaja_6, 3, 2));
	ft_lstend(&alst, ft_qwerty(krivaja_7, 2, 3));
	ft_lstend(&alst, ft_qwerty(krivaja_8, 2, 3));
	ft_lstend(&alst, ft_qwerty(zigzag_1, 3, 2));
	ft_lstend(&alst, ft_qwerty(zigzag_2, 2, 3));
	ft_lstend(&alst, ft_qwerty(zigzag_3, 3, 2));
	ft_lstend(&alst, ft_qwerty(zigzag_4, 2, 3));
	ft_lstend(&alst, ft_qwerty(piska_1, 2, 3));
	ft_lstend(&alst, ft_qwerty(piska_2, 3, 2));
	ft_lstend(&alst, ft_qwerty(piska_3, 3, 2));
	ft_lstend(&alst, ft_qwerty(piska_4, 2, 3));
	return (alst);
}
