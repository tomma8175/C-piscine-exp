/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:23:26 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/04 16:31:57 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

bool	is_valid(char *str)
{
	char	*c;
	int		i;
	int		j;

	c = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*c != '\0')
	{
		if (*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f'
			|| *c == '\r' || *c == ' ' || *c == '+' || *c == '-')
			return (false);
		c++;
	}
	i = 0;
	while (i < c - str)
	{
		j = i + 1;
		while (j < c - str)
			if (str[i] == str[j++])
				return (false);
		i++;
	}
	return (true);
}

void	ft_recursive(int number, char *base, int radix)
{
	if (number == -2147483648)
	{
		ft_recursive(number / radix, base, radix);
		write(1, &(base[-(number % radix)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_recursive(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		ft_recursive(number / radix, base, radix);
	write(1, &(base[number % radix]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (!is_valid(base))
		return ;
	radix = ft_strlen(base);
	ft_recursive(nbr, base, radix);
}
