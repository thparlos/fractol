/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:13:34 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:34:00 by abelkhay         ###   ########.fr       */
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
		ft_putstr("./fractol siegel\n./fractol douady\n");
		ft_putstr("./fractol octopus\n./fractol burningship\n");
		ft_putstr("./fractol shuriken\n./fractol lightning\n");
		exit(0);
	}
	fractol(ptr);
	return (0);
}
