/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:46:37 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 13:09:15 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (true)
	{
		c = str[i];
		if (c == '\0')
		{
			break ;
		}
		if (c >= 'A' && c <= 'Z')
		{
			str[i] = c + 32;
		}
		i++;
	}
	return (str);
}
