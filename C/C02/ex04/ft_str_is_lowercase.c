/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:17:40 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:30:30 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;
	bool	is_low;

	i = 0;
	is_low = true;
	while (true)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (!(c >= 'a' && c <= 'z'))
		{
			is_low = false;
			break ;
		}
		i++;
	}
	return (is_low);
}
