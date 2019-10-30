/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:01:04 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 14:01:09 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*temp;
	int		i;

	temp = (char *)src;
	i = 0;
	while (temp[i])
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
