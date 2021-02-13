/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:55:24 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 13:56:42 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char	*string1;
	char	string2[2];

	string1 = "0";
	printf("src	: %s\n", string1);
	ft_strlcpy(string2, string1, 1);
	printf("cpy	: %s\n", string2);
}
