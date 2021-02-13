/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:56:03 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/06 13:59:16 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (nb != 1)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
	else
		return (0);
}
