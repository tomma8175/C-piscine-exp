/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:19:57 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 15:49:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main()
{
	int nb = -1;
	int power = 10;

	printf("%d ˆ %d = %d", nb, power, ft_iterative_power(nb, power));
	return (0);
}
