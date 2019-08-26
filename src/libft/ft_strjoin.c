/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:57:24 by hwiegand          #+#    #+#             */
/*   Updated: 2019/01/27 12:16:02 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;

	if (!s1 || !s2)
		return (NULL);
	d = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s1);
	ft_strcat(d, s2);
	return (d);
}
