/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:17:59 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/11 13:58:25 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int size;
	int *array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	if ((array = malloc(size * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}
