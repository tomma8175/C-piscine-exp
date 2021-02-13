/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:13:36 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:15:26 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	bool	is_num;
	int		i;
	char	c;

	is_num = true;
	i = 0;
	while (true)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (!((c >= '0' && c <= '9')))
		{
			is_num = 0;
			break ;
		}
		i++;
	}
	return (is_num);
}
