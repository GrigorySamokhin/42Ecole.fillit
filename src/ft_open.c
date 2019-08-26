/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:09:36 by hwiegand          #+#    #+#             */
/*   Updated: 2019/05/03 15:09:38 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			g_last_block = 0;

int			ft_valid_tetermino_size(char *tetermino)
{
	int		i;
	int		slashes;
	int		dots;
	int		shap;

	shap = 0;
	dots = 0;
	i = -1;
	slashes = 0;
	while (tetermino[++i] && (tetermino[i] == '.' \
		|| tetermino[i] == '#' || tetermino[i] == '\n'))
	{
		(tetermino[i] == '.') ? dots++ : 0;
		(tetermino[i] == '\n') ? slashes++ : 0;
		(tetermino[i] == '#') ? shap++ : 0;
	}
	if (dots == 12 && slashes == 5 && shap == 4)
		return (1);
	if (tetermino[i] == '\0' && dots == 12 && slashes == 4 && shap == 4)
	{
		g_last_block++;
		return (1);
	}
	return (0);
}

int			ft_valid_tetermino_form(char *tetermino)
{
	int		i;
	int		ocur[4];
	int		k;
	int		zero;

	zero = 0;
	i = -1;
	k = 0;
	while (tetermino[++i] != '\0')
	{
		if (tetermino[i] == '#')
		{
			(zero == 0) ? zero = i : 0;
			ocur[k] = i - zero;
			k++;
		}
	}
	k = -1;
	while (++k < 3)
		if ((ocur[k + 1] - ocur[k]) >= 6
			|| (ocur[k + 1] - ocur[k]) == 2)
			return (0);
	return (1);
}

t_str		*ft_fig(char *buf, t_str *obrazci)
{
	t_str	*temp_obr;
	char	*str;
	char	dst[22];
	int		i;

	i = -1;
	str = dst;
	while (buf[++i] != '\0')
		if (buf[i] == '#')
			break ;
	temp_obr = obrazci;
	while (temp_obr)
	{
		str = getmap(4, str);
		if (!(str = temp_obr->f(str, i, 5, '#')))
			str = getmap(4, dst);
		if (ft_strcmp(buf, str) == 0)
			return (temp_obr);
		temp_obr = temp_obr->next;
	}
	return (NULL);
}

t_str		*ft_open_delete(t_str *figuri, t_str *obrazci)
{
	if (figuri != NULL)
		ft_lstdelstrone(&figuri);
	if (obrazci != NULL)
		ft_lstdelstrone(&obrazci);
	return (NULL);
}

t_str		*ft_open(int fd)
{
	t_str		*obrazci;
	t_str		*obr;
	t_str		*figuri;
	int			read_fd;
	char		buf[BUFF_SIZE + 1];

	figuri = NULL;
	obrazci = examplfull();
	while ((read_fd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[read_fd] = '\0';
		if (!(ft_valid_tetermino_size(buf)) || !(ft_valid_tetermino_form(buf)))
			return (ft_open_delete(figuri, obrazci));
		if (!(obr = ft_fig(buf, obrazci)))
			return (ft_open_delete(figuri, obrazci));
		ft_lstend(&figuri, ft_qwerty(obr->f, obr->heights, obr->width));
	}
	ft_lstdelstrone(&obrazci);
	if (g_last_block == 1)
		return (figuri);
	if (figuri != NULL)
		ft_lstdelstrone(&figuri);
	return (NULL);
}
