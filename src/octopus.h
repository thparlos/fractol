/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octopus.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:13:48 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 10:30:06 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		ifndef OCTOPUS_H
#		define OCTOPUS_H

#include "fractol.h"
#include "init.h"

void	launch_octopus(t_fractol *ptr);
void	init_octopus(t_fractol *ptr, int mode);

#		endif
