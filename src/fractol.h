/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:24:45 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:24:48 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef FRACTOL_H
#		define FRACTOL_H

#include "../libft/libft.h"
#include <mlx.h>
#include <math.h>
#include <stdio.h>

typedef struct	s_img
{
	char	*data;
	int		size_l;
	int		bpp;
	int		endian;
	void	*img_ptr;
}				t_img;

typedef struct	s_fractol
{
	int		res_width;
	int		res_height;
	void	*win_ptr;
	void	*mlx_ptr;
	int		color;
	int		fractal;
	int		x;
	double	x1;
	double	x2;
	int		y;
	double	y1;
	double	y2;
	double	zoom_x;
	double	zoom_y;
	int		img_x;
	int		img_y;
	double	z_r;
	double	z_i;
	double	c_r;
	double	c_i;
	int		iter_max;
	double	i;
	double	temp;
	float	moove;
	t_img	*img;
}				t_fractol;

int				fractol(t_fractol *ptr);
int				init(t_fractol *ptr);
int				img_to_win(t_fractol *ptr);
void			init_mandelbrot(t_fractol *ptr, int mode);
void			init_julia(t_fractol *ptr, int mode);
void			init_burningship(t_fractol *ptr, int mode);
int				init_fract(t_fractol *ptr, char *fractal);
void			init_douady(t_fractol *ptr, int mode);
void			init_octopus(t_fractol *ptr, int mode);
void			init_siegel(t_fractol *ptr, int mode);
void			init_shuriken(t_fractol *ptr, int mode);
void			init_lightning(t_fractol *ptr, int mode);
int				var_julia(int x, int y, t_fractol *ptr);

#		endif
