/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:55:25 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:55:27 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;
	char	c2;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	c2 = (char)c;
	while (i < n)
	{
		dest2[i] = src2[i];
		if (src2[i] == c2)
			return (dest2 + i + 1);
		i++;
	}
	return (NULL);
}
