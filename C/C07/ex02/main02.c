/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:26:40 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/11 13:57:18 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int *range;
	int bound;
	int min = 4;
	int max = 15;

	bound = ft_ultimate_range(&range, min, max);
	printf("min: %d\nmax: %d\nsize: %d\n", min, max, ft_ultimate_range(&range, min, max));
	return (0);
}
