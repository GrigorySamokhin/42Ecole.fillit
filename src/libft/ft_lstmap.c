/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:04:10 by hwiegand          #+#    #+#             */
/*   Updated: 2019/02/02 15:10:32 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *dst;
	t_list *k;

	if ((!lst || !f) || (!(new = f(lst))))
		return (NULL);
	dst = new;
	k = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
		{
			while (k)
			{
				free(k->content);
				dst = k->next;
				free(k);
				k = dst;
			}
			return (NULL);
		}
		new = new->next;
	}
	return (dst);
}
