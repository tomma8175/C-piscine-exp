/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:26:08 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/10 15:59:59 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	return (0);
}
