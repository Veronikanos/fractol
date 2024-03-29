/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtlostiu <vtlostiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 16:56:21 by vtlostiu          #+#    #+#             */
/*   Updated: 2019/07/01 19:37:07 by vtlostiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		which_one_fract(char **argv, t_pix *pix)
{
	if ((((ft_strcmp(argv[1], "Julia") == 0
	|| ft_strcmp(argv[1], "J") == 0) && (pix->fract_num = 0) == 0))
	|| ((ft_strcmp(argv[1], "Mandelbrot") == 0
	|| ft_strcmp(argv[1], "M") == 0) && (pix->fract_num = 1))
	|| ((ft_strcmp(argv[1], "Cubic_mandelbrot") == 0
	|| ft_strcmp(argv[1], "C") == 0) && (pix->fract_num = 2))
	|| ((ft_strcmp(argv[1], "Tricorn") == 0 ||
	ft_strcmp(argv[1], "T") == 0) && (pix->fract_num = 3))
	|| ((ft_strcmp(argv[1], "Burning_ship") == 0
	|| ft_strcmp(argv[1], "B") == 0) && (pix->fract_num = 4))
	|| ((ft_strcmp(argv[1], "Heart") == 0
	|| ft_strcmp(argv[1], "H") == 0) && (pix->fract_num = 5))
	|| ((ft_strcmp(argv[1], "Perpendicular_mandelbrot") == 0
	|| ft_strcmp(argv[1], "P") == 0) && (pix->fract_num = 6))
	|| ((ft_strcmp(argv[1], "Ship_cuboid") == 0
	|| ft_strcmp(argv[1], "S") == 0) && (pix->fract_num = 7)))
		change_reset(pix);
	else
		errors_msg(1);
}

static t_pix	*init_win(t_pix *pix)
{
	if (!pix)
		return (NULL);
	pix->mlx_ptr = mlx_init();
	pix->win_ptr = mlx_new_window(pix->mlx_ptr, WIDTH, HEIGHT, NAME);
	pix->img_ptr = mlx_new_image(pix->mlx_ptr, WIDTH, HEIGHT);
	pix->buf = (int *)mlx_get_data_addr(pix->img_ptr, &pix->bits_per_pixel,
			&pix->size_line, &pix->endian);
	return (pix);
}

int				main(int argc, char **argv)
{
	t_pix	*pix;

	if (argc != 2)
		errors_msg(1);
	else
	{
		if (!(pix = (t_pix *)malloc(sizeof(t_pix))))
			errors_msg(4);
		init_win(pix);
		which_one_fract(argv, pix);
		draw_screen(pix);
		mlx_hook(pix->win_ptr, 2, 5, kb_press_key, pix);
		mlx_mouse_hook(pix->win_ptr, mouse_zoom, pix);
		mlx_hook(pix->win_ptr, 6, 8, mouse_julia, pix);
		mlx_hook(pix->win_ptr, 17, 1L << 17, errors_msg, NULL);
		mlx_loop(pix->mlx_ptr);
		mlx_destroy_window(pix->mlx_ptr, pix->win_ptr);
	}
	return (0);
}
