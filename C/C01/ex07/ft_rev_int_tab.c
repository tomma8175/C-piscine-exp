/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:11:41 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/10/31 11:12:42 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int k;

	index = 0;
	while (index < size / 2)
	{
		k = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = k;
		index++;
	}
}
