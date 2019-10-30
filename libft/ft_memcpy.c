/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:55:45 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:56:38 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
