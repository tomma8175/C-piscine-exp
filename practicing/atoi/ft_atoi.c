/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:21:17 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/06 12:32:09 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int		ft_atoi(const char *str)
{
	int result;
	int minus;

	minus = 1;
	result = 0;
	while (true)
	{
		if (*str == '-')
			minus *= -1;
		if (*str >= '0' && *str <= '9')
			result = result * 10 + *str - '0';
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			break ;
		str++;
	}
	return (result * minus);
}

int		main(int argc, char **argv)
{
	int result;

	result = 0;
	if (argc == 2)
		result = ft_atoi(argv[1]);
	printf("%d\n", result);
}
