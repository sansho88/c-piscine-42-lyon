/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:17:30 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/15 17:52:49 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int sizedest;

	i = 0;
	sizedest = ft_strlen(dest);
	while (src[i])
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
	char *b = "ef";
	char *c = "abcd";
	char *d = "ef";

	printf("Expected output: %s\n",strcat(a,b));
	printf("Output: %s\n",ft_strcat(c,d));
	return (0);
}*/
