/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:06:49 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 14:06:51 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!s)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s[start] && len-- > 0)
		s2[i++] = s[start++];
	s2[i] = '\0';
	return (s2);
}
