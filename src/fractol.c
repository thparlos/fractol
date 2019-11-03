/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:29:22 by thparlos          #+#    #+#             */
/*   Updated: 2019/11/01 23:29:08 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		zoom_function(int keycode, int x, int y, t_fractol *ptr)
{
	double	tmp_x;
	double	tmp_y;

	tmp_x = x / ptr->zoom_x + ptr->x1;
	tmp_y = y / ptr->zoom_y + ptr->y1;
	if (keycode == 5)
	{
		ptr->zoom_x /= 1.1;
		ptr->zoom_y /= 1.1;
		ptr->moove *= 1.1;
	}
	if (keycode == 4)
	{
		ptr->zoom_x *= 1.1;
		ptr->zoom_y *= 1.1;
		ptr->moove /= 1.1;
	}
	ptr->x1 = tmp_x - (x / ptr->zoom_x);
	ptr->y1 = tmp_y - (y / ptr->zoom_y);
	img_to_win(ptr);
	return (0);
}

int		key_function(int keycode, t_fractol *ptr)
{
	if (keycode == 53)
	{
		free(ptr);
		exit(0);
	}
	if (keycode == 15)
		ptr->color = ptr->color + 0xf00000;
	if (keycode == 123)
		ptr->x1 -= ptr->moove;
	if (keycode == 124)
		ptr->x1 += ptr->moove;
	if (keycode == 126)
		ptr->y1 -= ptr->moove;
	if (keycode == 125)
		ptr->y1 += ptr->moove;
	img_to_win(ptr);
	return (0);
}

void	init_ptr(t_fractol *ptr)
{
	if (ptr->fractal == 1)
		init_mandelbrot(ptr, 1);
	else if (ptr->fractal == 2)
		init_julia(ptr, 1);
	else if (ptr->fractal == 3)
		init_burningship(ptr, 1);
}

int		init_fract(t_fractol *ptr, char *fractal)
{
	if (ft_strcmp("mandelbrot", fractal) == 0)
		ptr->fractal = 1;
	else if (ft_strcmp("julia", fractal) == 0)
		ptr->fractal = 2;
	else if (ft_strcmp("burningship", fractal) == 0)
		ptr->fractal = 3;
	else
		return (0);
	init_ptr(ptr);
	return (1);
}

int		fractol(t_fractol *ptr)
{
	init(ptr);
	ft_putstr("r = changer palette de couleur\nfleches = deplacements\
			\nmolette = zoom\n");
	mlx_hook(ptr->win_ptr, 2, 3, key_function, ptr);
	mlx_hook(ptr->win_ptr, 6, 5, var_julia, ptr);
	mlx_mouse_hook(ptr->win_ptr, zoom_function, ptr);
	mlx_loop(ptr->mlx_ptr);
	return (0);
}
