/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:44:51 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 18:48:56 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while ((sqrt = i * i) <= (unsigned)nb)
		i++;
	i--;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while ((i <= sqrt) && (nb % i != 0))
		i++;
	return (i > sqrt);
}

int	ft_find_next_prime(int nb)
{
	while (true)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}
