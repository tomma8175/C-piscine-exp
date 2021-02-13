/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:37:23 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 18:54:05 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main()
{
	int nb = 7;

	if (ft_is_prime(nb))
		printf("%d is a prime number\n", nb);
	else
		printf("%d is not a prime number\n", nb);
}
