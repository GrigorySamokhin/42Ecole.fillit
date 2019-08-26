/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:01:15 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/25 18:53:52 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *src, int k, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)k;
		i++;
	}
	return (str);
}
