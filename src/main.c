/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:27:32 by thparlos          #+#    #+#             */
/*   Updated: 2019/11/01 23:50:05 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	errors(void)
{
	ft_putstr("error");
	exit(0);
}

int		main(int argc, char **argv)
{
	t_fractol *ptr;

	ptr = NULL;
	if (!(ptr = (t_fractol*)malloc(sizeof(t_fractol))))
		errors();
	if (!(ptr->img = (t_img*)malloc(sizeof(t_img))))
		errors();
	ptr->res_width = 800;
	ptr->res_height = 600;
	ptr->moove = 0.1;
	if (argc != 2 || init_fract(ptr, argv[1]) != 1)
	{
		ft_putstr("./fractol mandelbrot\n./fractol julia\n");
		ft_putstr("./fractol burningship\n");
		exit(0);
	}
	fractol(ptr);
	return (0);
}
