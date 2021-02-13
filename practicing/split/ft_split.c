/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:30:59 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/12 20:07:45 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int 	len;
	char 	**result;
	bool	in_word;

	len = ft_strlen(str);
	printf("%d\n", len);
	i = 0;
	j = 0;
	while (*str != '\0')
	{
//		printf("im in str\n");
		while (i < len - 1)
		{
//			printf("im in i\n");
			in_word = false;
			while (j < len - 1)
			{
//				printf("im in j\n");
				if (is_space(str[j]) && in_word)
						break ;
				if (!is_space(str[j]))
					{
						in_word = true;
						result[i] = &str[j];
						printf("%c", str[j]);
					}
					j++;
			}
			i++;
			printf("\n");
		}
	}
	return(result);
}

int 	main(int argc, char **argv)
{
	if (argc == 2)
		ft_split(argv[1]);
	return (0);
}
