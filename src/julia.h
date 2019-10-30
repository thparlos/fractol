/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:12:32 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:26:50 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef JULIA_H
#		define JULIA_H

#include "fractol.h"
#include "init.h"

void	launch_julia(t_fractol *ptr);
void	init_julia(t_fractol *ptr, int mode);

#		endif
