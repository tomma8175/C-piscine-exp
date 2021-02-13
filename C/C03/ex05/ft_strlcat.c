/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:19:14 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 17:18:36 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dstsize;
	unsigned int srcsize;
	unsigned int left;

	dstsize = 0;
	while (*dest)
	{
		dest++;
		dstsize++;
	}
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (size <= dstsize)
		return (srcsize + size);
	left = size - dstsize - 1;
	while (left-- > 0)
		*dest++ = *src++;
	*dest = 0;
	return (srcsize + dstsize);
}
