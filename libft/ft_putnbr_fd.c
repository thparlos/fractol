/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:59:00 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:59:03 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i >= 0 && i <= 9)
		ft_putchar_fd(i + '0', fd);
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd((i % 10) + '0', fd);
	}
}
