/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:55:07 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:55:10 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *renvoie;

	renvoie = (char *)malloc(sizeof(char) * size);
	if (!renvoie)
		return (NULL);
	while (size-- > 0)
		renvoie[size] = '\0';
	return ((void *)renvoie);
}
