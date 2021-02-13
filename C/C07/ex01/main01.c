/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:15:04 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 19:29:05 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int min = 1;
	int max = 98;
	int i;

	int *array = ft_range(min, max);
	for(i = 0; i < max - min + 1; i++)
		printf("%d, ", array[i]);
}
