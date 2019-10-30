/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:13:33 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:13:36 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cpyitoa(char *strint, long int len, long int n2, int neg)
{
	int i;

	i = 0;
	if (neg == 1)
	{
		strint[i] = '-';
		i++;
	}
	while (len >= 1)
	{
		strint[i] = (n2 / len) + '0';
		n2 = n2 % len;
		len = len / 10;
		i++;
	}
	strint[i] = '\0';
	return (strint);
}

char		*ft_itoa(int n)
{
	int			i;
	long int	n2;
	char		*strint;
	int			neg;
	long int	len;

	i = 0;
	n2 = n;
	neg = 0;
	len = 1;
	if (n2 < 0)
	{
		neg = 1;
		n2 = n2 * -1;
	}
	while (n2 / len >= 10)
	{
		i++;
		len = len * 10;
	}
	strint = (char *)malloc(sizeof(char) * i + neg + 2);
	if (!strint)
		return (NULL);
	strint = ft_cpyitoa(strint, len, n2, neg);
	return (strint);
}
