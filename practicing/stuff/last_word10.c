/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:49:41 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/06 11:55:32 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void last_word(char *str)
{
	int		i;
	char	*l_word;
	bool	in_word;

	i = 0;
	l_word = str;
	while (*str)
	{
		if (is_spase(*str) && in_word)
			in_word = false;
		if (!is_space(*str) && !in_word)
		{
			in_word = true;
			l_word = str;
		}
		str++;
	}
	if (l_word == 0)
		return ;
	while (*l_word)
	{
		if (is_space(*last_word))
				break ;
		write(1, l_word, 1);
		l_word++;
	}
}
