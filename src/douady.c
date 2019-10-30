/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   douady.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:25:01 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:25:04 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "douady.h"

void	init_douady(t_fractol *ptr, int mode)
{
	ptr->i = 0;
	if (mode == 1)
	{
		ptr->x1 = -1;
		ptr->x2 = 1;
		ptr->y1 = -1.2;
		ptr->y2 = 1.2;
		ptr->c_r = ptr->x / ptr->zoom_x + ptr->x1;
		ptr->c_i = ptr->y / ptr->zoom_y + ptr->y1;
		ptr->z_r = 0;
		ptr->z_i = 0;
		ptr->iter_max = 50;
		ptr->img_x = ptr->res_width;
		ptr->img_y = ptr->res_height;
		ptr->zoom_x = ptr->img_x / (ptr->x2 - ptr->x1);
		ptr->zoom_y = ptr->img_y / (ptr->y2 - ptr->y1);
		ptr->color = 0x00ff00;
	}
	else if (mode == 2)
	{
		ptr->z_r = ptr->x / ptr->zoom_x + ptr->x1;
		ptr->z_i = ptr->y / ptr->zoom_y + ptr->y1;
		ptr->c_r = -0.0958;
		ptr->c_i = 0.735;
	}
}

void	launch_douady(t_fractol *ptr)
{
	ptr->x = -1;
	while (++ptr->x < ptr->img_x)
	{
		ptr->y = 0;
		while (ptr->y < ptr->img_y)
		{
			init_douady(ptr, 2);
			while (ptr->z_r * ptr->z_r + ptr->z_i * ptr->z_i < 4
					&& ptr->i < ptr->iter_max)
			{
				ptr->temp = ptr->z_r;
				ptr->z_r = ptr->z_r * ptr->z_r - ptr->z_i * ptr->z_i + ptr->c_r;
				ptr->z_i = 2 * ptr->z_i * ptr->temp + ptr->c_i;
				ptr->i++;
			}
			ptr->i == ptr->iter_max ? draw(ptr->x, ptr->y, ptr->color, ptr) :
				draw(ptr->x, ptr->y, ptr->i * ptr->color / ptr->iter_max, ptr);
			ptr->y++;
		}
	}
}
