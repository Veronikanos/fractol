/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fractals.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtlostiu <vtlostiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:24:34 by vtlostiu          #+#    #+#             */
/*   Updated: 2019/05/28 21:02:19 by vtlostiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_heart(t_pix *pix)
{
	if (!pix)
		errors_msg(5);
	pix->zoom = 0.5;
	pix->move = (t_vec2){ 0, 0 };
	pix->maxIter = 571;
	pix->rate = (double)(WIDTH) / HEIGHT;
}
void	init_burning_ship(t_pix *pix)
{
	if (!pix)
		errors_msg(5);
	pix->zoom = 0.5;
	pix->move = (t_vec2){ 0, 0 };
	pix->maxIter = 171;
	pix->rate = (double)(WIDTH) / HEIGHT;
}

void	init_julia(t_pix *pix)
{
	if (!pix)
		errors_msg(5);
//	pix->color_max = 0xFFFFFF;
	pix->real_im = (t_vec2){ -0.556, 0.53415 };
	pix->zoom = 0.5;
	pix->move = (t_vec2){ 0, 0 };
	pix->maxIter = 50;
	pix->rate = (double)(WIDTH) / HEIGHT;
}

void	init_cubic_mandelbrot(t_pix *pix)
{
	if (!pix)
		errors_msg(5);
	pix->zoom = 0.5;
	pix->move = (t_vec2){ 0, 0 };
	pix->maxIter = 172;
	pix->rate = (double)(WIDTH) / HEIGHT;
}

void	init_mandelbrot(t_pix *pix)
{
	if (!pix)
		errors_msg(5);
	pix->zoom = 0.5;
	pix->move = (t_vec2){ 0, 0 };
	pix->maxIter = 28;
	pix->rate = (double)(WIDTH) / HEIGHT;
}

//t_pix	*init_tricorn(t_pix *pix)
//{
//	if (!pix)
//		return (NULL);
//	pix->zoom = 0.5;
//	pix->move = (t_vec2){ 0, 0 };
//	pix->maxIter = 28;
//	pix->rate = (double)(WIDTH) / HEIGHT;
//}