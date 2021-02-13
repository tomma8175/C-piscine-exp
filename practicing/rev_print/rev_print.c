/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:16:35 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/11 14:35:27 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < len)
	{
		write(1, &str[len - i - 1], 1);
		i++;
	}
	return (str);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}
