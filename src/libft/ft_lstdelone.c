/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 14:42:54 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/25 20:04:13 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*new_l;

	new_l = *alst;
	if (alst || del)
	{
		del(new_l->content, new_l->content_size);
		free(*alst);
		*alst = NULL;
	}
}
