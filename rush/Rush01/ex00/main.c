/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:08:27 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/01 16:50:04 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "func_def.h"

int			array_2_1[] = {3214, 3124};
int			array_3_1[] = {1324, 2314};
int			array_2_2[] = {1423, 2143, 2413, 3124, 3412};
int			array_2_3[] = {1432, 2431, 3421};
int			array_4_1[] = {1234};
int			n = 4;
int			*col_up;
int			*col_down;
int			*row_left;
int			*row_right;

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_make_grid(argv[1], n);
	}
	else
		ft_error();
	return (0);
}
