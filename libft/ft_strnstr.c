/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:04:39 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 14:05:39 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
