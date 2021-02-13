/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:17:13 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/12 14:30:19 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	c;

	count = 0;
	while (str[count] != '\0')
		count++;
	count = count - 1;
	i = 0;
	while (i < ((count + 1) / 2))
	{
		c = str[i];
		str[i] = str[count - i];
		str[count - i] = c;
		i++;
	}
	return (str);
}

int	main()
{
	char *str;

//	str = malloc(255 * sizeof(char));
	str = ft_strrev("hi guys");
	return (0);
}
