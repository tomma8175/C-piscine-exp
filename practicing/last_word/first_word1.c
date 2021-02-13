/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:13:19 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/06 12:19:59 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void first_word(char *str)
{
	int		i;
	int		start;
	char 	*word;

	i = 0;
	word = str;
	while (is_space(str[i]))
		i++;
	start = i;
	while (true)
	{
		if (str[i] == '\0')
			break ;
		if (is_space(str[i]))
			break ;
		i++;
	}
	if (word != 0)
		write(1, word + start, i - start);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}
