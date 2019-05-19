/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtlostiu <vtlostiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:55:38 by vtlostiu          #+#    #+#             */
/*   Updated: 2019/04/27 17:26:47 by vtlostiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		errors_msg(int err)
{
	if (err == 2)
		ft_putendl("\nUsage: ./fdf input_file.fdf\n\n"
				"Choose one of the available fractals below:\n"
	"--> Julia\n"
 "--> Mandelbrot");

	//If no parameter is provided, or if the parameter is invalid,
	// the program displays a list of available parameters and exits properly.

	else if (err == 1)
		ft_putendl("Incorrect file or impossible to write file.\n");
	else if (err == 3)
		ft_putendl("Incorrect color.\n");
	else if (err == 4)
		ft_putendl("Impossible to allocate memory.\n");
	else if (err == 5)
		ft_putendl("There are no string to write from file.\n");
	else if (err == 6)
		ft_putendl("Invalid file or it is a directory.\n");
	exit(0);
	return (0);
}
