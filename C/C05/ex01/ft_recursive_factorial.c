/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:08:55 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 15:18:23 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb >= 0)
	{
		result = 1;
		if (nb == 0)
			return (1);
		if (nb == 1)
			return (1);
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	return (0);
}
