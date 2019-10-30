/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:56:06 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:56:09 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src2;

	i = 0;
	src2 = (char *)s;
	while (n-- > 0)
	{
		if (src2[i] == (char)c)
			return (src2 + i);
		i++;
	}
	return (NULL);
}
