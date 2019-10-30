/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:06:14 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 14:06:16 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		count;
	char	c;
	int		nb;

	count = ft_strlen(str) - 1;
	nb = 0;
	while (nb <= count)
	{
		c = str[nb];
		str[nb] = str[count];
		str[count] = c;
		count--;
		nb++;
	}
	return (str);
}
