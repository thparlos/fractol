/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:57:05 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:57:07 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *tmp;

	tmp = ft_strnew(len);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, len);
		dest = ft_memcpy(dest, tmp, len);
	}
	free(tmp);
	return (dest);
}
