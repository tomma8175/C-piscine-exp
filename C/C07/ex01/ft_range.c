/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:06:57 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 19:28:38 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int len;
	int *range;

	if (min >= max)
		return (NULL);
	len = max - min;
	range = (int *)malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
