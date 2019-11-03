/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:33:22 by thparlos          #+#    #+#             */
/*   Updated: 2019/11/03 20:12:09 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_mandelbrot(t_fractol *ptr, int mode)
{
	ptr->i = 0;
	if (mode == 1)
	{
		ptr->x1 = -2.1;
		ptr->x2 = 0.6;
		ptr->y1 = -1.2;
		ptr->y2 = 1.2;
		ptr->zoom_x = 150;
		ptr->zoom_y = 150;
		ptr->c_r = ptr->x / ptr->zoom_x + ptr->x1;
		ptr->c_i = ptr->y / ptr->zoom_y + ptr->y1;
		ptr->z_r = 0;
		ptr->z_i = 0;
		ptr->iter_max = 50;
		ptr->img_x = ptr->res_width;
		ptr->img_y = ptr->res_height;
		ptr->color = 16389512;
	}
	else if (mode == 2)
	{
		ptr->c_r = ptr->x / ptr->zoom_x + ptr->x1;
		ptr->c_i = ptr->y / ptr->zoom_y + ptr->y1;
		ptr->z_r = 0;
		ptr->z_i = 0;
	}
}

void	launch_mandelbrot(t_fractol *ptr)
{
	ptr->x = -1;
	while (ptr->x < ptr->img_x)
	{
		ptr->y = 0;
		while (ptr->y < ptr->img_y)
		{
			init_mandelbrot(ptr, 2);
			while (ptr->z_r * ptr->z_r + ptr->z_i * ptr->z_i < 4
					&& ptr->i < ptr->iter_max)
			{
				ptr->temp = ptr->z_r;
				ptr->z_r = ptr->z_r * ptr->z_r - ptr->z_i * ptr->z_i + ptr->c_r;
				ptr->z_i = 2 * ptr->z_i * ptr->temp + ptr->c_i;
				ptr->i++;
			}
			ptr->i == ptr->iter_max ? draw(ptr->x, ptr->y, ptr->color\
					, ptr) : draw(ptr->x, ptr->y, ptr->i * ptr->color\
						/ ptr->iter_max, ptr);
			ptr->y++;
		}
		ptr->x++;
	}
}
