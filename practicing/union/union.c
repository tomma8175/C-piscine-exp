/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:37:09 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/12 15:20:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_print(bool already[127], char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (!already[str[i]])
		{
			already[str[i]] = true;
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	ft_union(char *str1, char *str2)
{
	int		i;
	bool	already[127];

	i = 0;
	while (i < 127)
	{
		already[i] = false;
		i++;
	}
	ft_print(already, str1);
	ft_print(already, str2);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
