/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:27:45 by thparlos          #+#    #+#             */
/*   Updated: 2019/11/01 23:59:40 by thparlos         ###   ########.fr       */
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

void			init_burningship(t_fractol *ptr, int mode);
void			launch_burningship(t_fractol *ptr);
int				fractol(t_fractol *ptr);
int				init(t_fractol *ptr);
int				img_to_win(t_fractol *ptr);
void			init_mandelbrot(t_fractol *ptr, int mode);
void			init_julia(t_fractol *ptr, int mode);
int				init_fract(t_fractol *ptr, char *fractal);
int				var_julia(int x, int y, t_fractol *ptr);
void			launch_mandelbrot(t_fractol *ptr);
void			init_mandelbrot(t_fractol *ptr, int mode);
void			launch_julia(t_fractol *ptr);
void			init_julia(t_fractol *ptr, int mode);
void			errors(void);
int				init(t_fractol *ptr);
int				img_to_win(t_fractol *ptr);
void			launch_fractal(t_fractol *ptr);
void			draw(int x, int y, int color, t_fractol *ptr);
int				var_julia(int x, int y, t_fractol *ptr);

#		endif
