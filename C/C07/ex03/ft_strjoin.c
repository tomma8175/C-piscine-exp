/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:04:10 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/12 13:32:29 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strs_len(int size, char **strings, int sep_length)
{
	int	final_length;
	int i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_strlen(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int 	len;
	char	*string;
	char	*result;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_strs_len(size, strs, ft_strlen(sep));
	if (!(result = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	string = result;
	i = 0;
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		i++;
	}
	*string = '\0';
	return (result);
}
