/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:56:51 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/15 18:00:28 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int i;
	int sizedest;

	i = 0;
	sizedest = ft_strlen(dest);
	while (src[i] && i < n)
		dest[sizedest + i] = src[i++];
	dest[sizedest + i] = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *a = "abcd";
	char *b = "efghijkl";
	char *c = "abcd";
	char *d = "efghijkl";
	int size = 4;

	printf("Expected output: %s\n",strncat(a,b, size));
	printf("Output: %s\n",ft_strncat(c,d, size));
	return (0);
}*/
