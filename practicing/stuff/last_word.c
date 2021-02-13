/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:16:37 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/06 11:49:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	write_last_word(char *str)
{
	bool	in_word;
	char	*last_word;

	last_word = str;
	while (*str)
	{
		if (is_space(*str) && in_word)
			in_word = false;
		else if (!is_space(*str) && !in_word)
		{
			in_word = true;
			last_word = str;
		}
		str++;
	}
	if (last_word == 0)
		return ;
	while (*last_word)
	{
		if (is_space(*last_word))
			break ;
		write(1, last_word, 1);
		last_word++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		write_last_word(argv[1]);
	write(1, "\n", 1);
}
