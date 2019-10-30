/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:05:53 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 14:05:55 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = ft_strlen(s);
	while (s2[i] != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (s2 + i);
}
