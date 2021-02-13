/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:06:09 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/03 15:16:28 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *str;
	char *to_find;

	str = "aaa bbb ccc def";
	to_find = "ccc";
	printf("c  : %s\n", strstr(str, to_find));
	printf("ft : %s\n", ft_strstr(str, to_find));
}
