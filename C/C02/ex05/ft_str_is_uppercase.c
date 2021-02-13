/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:24:39 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:26:07 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;
	bool	is_upper;

	i = 0;
	is_upper = true;
	while (true)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (!(c >= 'A' && c <= 'Z'))
		{
			is_upper = false;
			break ;
		}
		i++;
	}
	return (is_upper);
}
