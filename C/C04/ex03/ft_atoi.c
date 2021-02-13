/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:02:44 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 17:45:55 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r' || c == ' ');
}

bool	plus_or_minus(char c)
{
	return (c == '-' || c == '+');
}

int		ft_atoi(const char *str)
{
	int		num;
	int		minus;

	minus = 1;
	num = 0;
	while (*str != '\0')
	{
		while (is_space(*str))
			str++;
		while (plus_or_minus(*str))
		{
			if (*str == '-')
				minus *= -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			num *= 10;
			num += (*str) - '0';
			str++;
		}
		break ;
	}
	return (num * minus);
}
