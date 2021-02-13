/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:01:58 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/03 15:15:44 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *str1;
	char *find;

	if (*to_find == '\0')
		return (str);
	str1 = str;
	find = to_find;
	while (true)
	{
		if (*find == '\0')
			return (str1 - (find - to_find));
		if (*str1 == *find)
			find++;
		else
			find = to_find;
		if (*str1 == '\0')
			break ;
		str1++;
	}
	return (0);
}
