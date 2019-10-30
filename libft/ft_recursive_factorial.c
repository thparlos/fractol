/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:59:46 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:59:47 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb >= 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
