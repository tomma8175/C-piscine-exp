/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:59:45 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/10/28 20:15:42 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char a, char b);
void	ft_putchar(char c);
int	main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'b';
	swap(a, b);
	return 0;
}

void	swap(char a, char b)
{
	char c;

	c = a;
	a = b;
	b = c;
	ft_putchar(a);
	ft_putchar(b);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
