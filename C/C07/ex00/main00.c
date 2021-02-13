/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:56:51 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/09 15:00:23 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char 	*ft_strdup(char *src);

int	main()
{
	char str[] = "abcdefjhiklmnopqrstuvwxyz";

	printf("c	: %s\n", strdup(str));
	printf("ft	: %s\n", ft_strdup(str));
}
