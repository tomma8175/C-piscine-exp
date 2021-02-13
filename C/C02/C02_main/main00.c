/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:20:20 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 11:59:30 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char dest[12];

	src = "helloooo ooo";
	printf("src   : %s\n", src);
	ft_strcpy(dest, src);
	printf("dest  : %s\n", dest);
}
