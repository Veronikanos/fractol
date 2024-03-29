/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtlostiu <vtlostiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:13:42 by vtlostiu          #+#    #+#             */
/*   Updated: 2019/07/01 19:46:30 by vtlostiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

unsigned int	color_burning_ship(int i, int maxiter, t_color col)
{
	double j;
	double t;

	t = (double)i / maxiter;
	j = 1 - t;
	if (i == maxiter)
		return (0);
	col = (t_color) { 6.7 * j * t * 255,
					12.5 * j * t * 255,
					9.3 * pow(j, 3) * t * 255};
	return ((col.R << 16) + (col.G << 8) + col.B);
}

unsigned int	color_red(int i, int maxiter, t_color col)
{
	if (i == maxiter)
		return (0);
	col = (t_color) { sin(0.27 * (double)i + 2.5) * 127 + 135,
					sin(0.15 * (double)i + 4.5) * 127 + 128,
					sin(0.3 * (double)i + 3.8) * 127 + 128};
	return ((col.R << 16) + (col.G << 8) + col.B);
}

unsigned int	color_psy(int i, int maxiter)
{
	if (i == maxiter)
		return (0);
	return ((0xFFFFFF / maxiter) * (i + 1000));
}

unsigned int	color_breeze(int i, int maxiter, t_color col)
{
	if (i == maxiter)
		return (0);
	col = (t_color) { cos(0.8 * (double)i + 2),
					sin(0.3 * (double)i + 3) * 128 + 128,
					sin(0.3 * (double)i + 3) * 128 + 230 };
	return ((col.R << 16) + (col.G << 8) + col.B);
}

unsigned int	color_yellow(int i, int maxiter, t_color col)
{
	double j;
	double t;

	t = (double)i / maxiter;
	j = 1 - t;
	if (i == maxiter)
		return (0);
	col = (t_color) { (unsigned int)(9 * j * pow(t, 3) * 255),
					(unsigned int)(15 * pow(j, 2) * pow(t, 2) * 255),
					(unsigned int)(6.5 * pow(j, 3) * t * 255)};
	return ((col.R << 16) + (col.G << 8) + col.B);
}
