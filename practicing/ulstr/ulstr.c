/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:52:18 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/11 15:03:08 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str + 32);
		else if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str - 32);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
