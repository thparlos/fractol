/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:13:19 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:29:57 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef MANDELBROT_H
#		define MANDELBROT_H

#include "fractol.h"
#include "init.h"

void	launch_mandelbrot(t_fractol *ptr);
void	init_mandelbrot(t_fractol *ptr, int mode);

#		endif
