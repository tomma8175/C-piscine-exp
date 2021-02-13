/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:11:53 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/02 13:48:08 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

void	ft_transform_char(char *c, bool to_upper)
{
	if (!to_upper)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
		}
	}
	else
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
	}
}

bool	is_char_alpha(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool	is_char_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

void	str_capitalize(char *c, bool *in_word, bool *skip_word)
{
	bool first_letter;

	first_letter = false;
	if (!*in_word)
	{
		if (is_char_numeric(*c))
			*skip_word = true;
		else if (is_char_alpha(*c) && !*skip_word)
		{
			*in_word = true;
			first_letter = true;
		}
	}
	ft_transform_char(c, false);
	if (*in_word)
		ft_transform_char(c, first_letter);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*c;
	bool	in_word;
	bool	skip_word;

	i = 0;
	in_word = false;
	skip_word = false;
	while (true)
	{
		c = &str[i];
		if (*c == '\0')
			break ;
		str_capitalize(c, &in_word, &skip_word);
		if (!(is_char_alpha(*c) || is_char_numeric(*c)))
		{
			in_word = false;
			skip_word = false;
		}
		i++;
	}
	return (str);
}
