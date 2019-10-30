/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:26:37 by abelkhay          #+#    #+#             */
/*   Updated: 2019/10/29 02:33:39 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

int		var_julia(int x, int y, t_fractol *ptr)
{
	if (x < ptr->res_width && x > 0 && y < ptr->res_height && y > 0)
	{
		ptr->c_r = (double)(x + 400 - ptr->res_width) / 500;
		ptr->c_i = (double)(y + 400 - ptr->res_height) / 500;
	}
	img_to_win(ptr);
	return (0);
}

void	draw(int x, int y, int color, t_fractol *ptr)
{
	int index;
	int *ptr2;

	if (x >= 0 && x < ptr->res_width && y >= 0 && y < ptr->res_height)
	{
		index = y * ptr->img->size_l + x * ptr->img->bpp / 8;
		ptr2 = (int*)&ptr->img->data[index];
		*ptr2 = color;
	}
}

void	launch_fractal(t_fractol *ptr)
{
	if (ptr->fractal == 1)
		launch_mandelbrot(ptr);
	else if (ptr->fractal == 2)
		launch_julia(ptr);
	else if (ptr->fractal == 3)
		launch_burningship(ptr);
	else if (ptr->fractal == 4)
		launch_douady(ptr);
	else if (ptr->fractal == 5)
		launch_octopus(ptr);
	else if (ptr->fractal == 6)
		launch_siegel(ptr);
	else if (ptr->fractal == 7)
		launch_shuriken(ptr);
	else if (ptr->fractal == 8)
		launch_lightning(ptr);
}

int		img_to_win(t_fractol *ptr)
{
	if (!(ptr->img->img_ptr = mlx_new_image(ptr->mlx_ptr, ptr->res_width, ptr->res_height)))
		errors();
	if (!(ptr->img->data = mlx_get_data_addr(ptr->img->img_ptr, &ptr->img->bpp\
					, &ptr->img->size_l, &ptr->img->endian)))
		errors();
	launch_fractal(ptr);
	mlx_clear_window(ptr->mlx_ptr, ptr->win_ptr);
	mlx_put_image_to_window(ptr->mlx_ptr, ptr->win_ptr\
			, ptr->img->img_ptr, 0, 0);
	mlx_destroy_image(ptr->mlx_ptr, ptr->img->img_ptr);
	return (0);
}

int		init(t_fractol *ptr)
{
	if (!(ptr->mlx_ptr = mlx_init()))
		errors();
	if (!(ptr->win_ptr = mlx_new_window(ptr->mlx_ptr, ptr->res_width\
					, ptr->res_height, "Frac'tol")))
		errors();
	img_to_win(ptr);
	return (0);
}
