/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:29:57 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/01 18:20:30 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == 0 || tab[i] >= tab[i - 1])
		{
			i++;
		}
		else
		{
			swap(&tab[i], &tab[i - 1]);
			i--;
		}
	}
}
