/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:36:25 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 16:47:26 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

bool	ft_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int		check_base(char *str)
{
	char	*c;
	int		i;
	int		j;

	c = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*c)
	{
		if (ft_space(*c) || *c == '+' || *c == '-')
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

int		ft_calc(char *base, char match)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int b;
	int minus;
	int	matched;
	int result;

	b = ft_strlen(base);
	if (!check_base(base))
		return (0);
	while (ft_space(*str))
		str++;
	minus = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while ((matched = ft_calc(base, *str)) != -1)
	{
		result *= b;
		result += matched;
		str++;
	}
	return (result * minus);
}
