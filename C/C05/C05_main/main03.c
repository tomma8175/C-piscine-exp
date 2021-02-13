/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:49:21 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 15:53:36 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main()
{
	int nb = -2;
	int power = 10;

	printf("%d ^ %d = %d\n", nb, power, ft_recursive_power(nb, power));
}
