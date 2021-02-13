/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:00:56 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:11:30 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	bool	is_char;
	int		i;
	char	c;

	is_char = true;
	i = 0;
	while (true)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		{
			is_char = 0;
			break ;
		}
		i++;
	}
	return (is_char);
}
