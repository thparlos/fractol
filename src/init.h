/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:25:26 by abelkhay          #+#    #+#             */
/*   Updated: 2019/10/29 02:43:24 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef INIT_H
#		define INIT_H

#include "fractol.h"
#include "mandelbrot.h"
#include "julia.h"
#include "burningship.h"
#include "douady.h"
#include "octopus.h"
#include "siegel.h"
#include "shuriken.h"
#include "lightning.h"

void		errors(void);
int		init(t_fractol *ptr);
int		img_to_win(t_fractol *ptr);
void	launch_fractal(t_fractol *ptr);
void	draw(int x, int y, int color, t_fractol *ptr);
int		var_julia(int x, int y, t_fractol *ptr);

#		endif
