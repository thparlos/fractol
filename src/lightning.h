/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lightning.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:25:44 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:33:36 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef LIGHTNING_H
#		define LIGHTNING_H

#include "fractol.h"
#include "init.h"

void	launch_lightning(t_fractol *ptr);
void	init_lightning(t_fractol *ptr, int mode);

#		endif
