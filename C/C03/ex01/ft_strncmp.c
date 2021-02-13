/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:17:22 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 17:13:37 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2 || *s2 > *s1)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	return (*s1 - *s2);
}