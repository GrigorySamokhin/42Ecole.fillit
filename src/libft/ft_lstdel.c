/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:23:14 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/25 20:05:10 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		**dst;

	dst = alst;
	if (del)
	{
		while ((*dst)->next)
			ft_lstdel(&(*dst)->next, del);
		ft_lstdelone(&(*dst), del);
	}
}
