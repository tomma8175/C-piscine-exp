/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:26:23 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 12:26:54 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "HELLO";
	str_invalid = "HELLo";
	printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));
}
