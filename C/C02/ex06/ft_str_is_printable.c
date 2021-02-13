/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:28:42 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:30:10 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;
	bool	is_valid;

	i = 0;
	is_valid = true;
	while (true)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (!(c >= ' ' && c <= 127))
		{
			is_valid = false;
			break ;
		}
		i++;
	}
	return (is_valid);
}
