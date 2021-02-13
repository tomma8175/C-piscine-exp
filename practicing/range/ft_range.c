/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:15:18 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/12 19:30:27 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i;
	int	*range;
	int size;
	int minus;

	minus = 1;
	if (start <= end)
		size = end - start + 1;
	else
	{
		size = start - end + 1;
		minus *= -1;
	}
	range = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		range[i] = start + i * minus;
		i++;
	}
	return (range);
}

#include <stdio.h>

int		main()
{
	int *array;

	array = ft_range(0, 0);
	for (int i = 0; i < 1; i++)
		printf("%d, ", array[i]);
	printf("\n");
}
