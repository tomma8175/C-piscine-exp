/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:34:17 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:45:26 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[i];
	while (true)
	{
		c = str[i];
		if (c == '\0')
		{
			break ;
		}
		if (c >= 'a' && c <= 'z')
		{
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}
