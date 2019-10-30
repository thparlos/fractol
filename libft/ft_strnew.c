/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:04:11 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 14:04:13 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
