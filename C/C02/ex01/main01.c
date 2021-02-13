/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:54:46 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/01/18 17:06:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src;
	char dest[20];
	char dest2[20];

	strcpy(dest,"This is string.h library function");
	printf("dest : %s\n", dest);
	src = "hellooooooo";
	printf("src   : %s\n", src);
	strncpy(dest, src, 5);
	printf("func  : %s\n", dest);
	//ft_strncpy(dest2, src, 5);
	//printf("dest  : %s\n", dest2);
}
