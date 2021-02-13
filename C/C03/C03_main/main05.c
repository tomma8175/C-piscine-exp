/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:15:28 by tmkrtchy          #+#    #+#             */
/*   Updated: 2020/11/05 14:16:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char buf1[20] = "abc";
	char buf2[20] = "abc";
	int d;
	d = ft_strlcat(buf1, "def", 7);
	printf("%d %s\n", d, buf1);
	d = strlcat(buf2, "def", 7);
	printf("%d %s\n", d, buf2);

	strcpy(buf1, "abc");
	strcpy(buf2, "abc");
	d = ft_strlcat(buf1, "def", 6);
	printf("%d %s\n", d, buf1);
	d = strlcat(buf2, "def", 6);
	printf("%d %s\n", d, buf2);

	strcpy(buf1, "abc");
	strcpy(buf2, "abc");
	d = ft_strlcat(buf1, "def", 2);
	printf("%d %s\n", d, buf1);
	d = strlcat(buf2, "def", 2);
	printf("%d %s\n", d, buf2);
}
