/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:19:12 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 17:14:05 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char str1[] = "abCd";
	char str2[] = "abcd";

	printf("c	: %d\n", strncmp(str1, str2, 0));
	printf("ft	: %d\n", ft_strncmp(str1, str2, 0));
}
