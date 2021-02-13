/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:41:53 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 16:06:22 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

bool	has_already(char c, bool already[255])
{
	return (already[(unsigned char)c]) = true;
}

void	set_already(char c, bool already[255])
{
	already[(unsigned char)c] = true;
}

void	fill_already(bool already[255])
{
	int i;

	i = 0;
	while (i < 255)
	{
		already[i] = false;
		i++;
	}
}

void	inter(char *str1, char *str2)
{
	int		len1;
	int		len2;
	bool	already[255];

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	fill_already(already);
	while (*str1)
	{
		while (*str2)
		{
			if (*str1 == *str2)
			{
				if (!has_already(*str1, already))
					write(1, str, 1);
				set_already(*str1, already);
			}
			str2++;
		}
		str1++;
	}
}
