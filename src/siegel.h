/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   siegel.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:14:01 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:32:02 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef SIEGEL_H
#		define SIEGEL_H

#include "fractol.h"
#include "init.h"

void	launch_siegel(t_fractol *ptr);
void	init_siegel(t_fractol *ptr, int mode);

#		endif
