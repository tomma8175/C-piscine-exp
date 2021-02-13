/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:21:51 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/10 19:52:26 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int a)
{
	char c;
	char d;

	if (a < 10)
	{
		c = a + '0';
		write(1, &c, 1);
	}
	else
	{
		c = a / 10 + '0';
		d = a % 10 + '0';
		write(1, &c, 1);
		write(1, &d, 1);
	}
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i %5 == 0))
			ft_putstr("fizzbuzz");
		if (i % 5 == 0)
			ft_putstr("buzz");
		if (i % 3 == 0)
			ft_putstr("fizz");
		else
			ft_putint(i);
		i++;
	}
	return (0);
}
