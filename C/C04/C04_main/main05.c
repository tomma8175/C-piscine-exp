/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:31:30 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 13:50:54 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("-20000000000", "01234567"));
	printf("%d\n", ft_atoi_base("-80000000", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("101", "01"));
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("20000000000", "01234567"));
	printf("%d\n", ft_atoi_base("80000000", "0123456789ABCDEF"));
}
