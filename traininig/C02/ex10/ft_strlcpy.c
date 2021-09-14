/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:03:53 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 18:29:06 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "mylib.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
		dest[i] = src[i++];
	dest[i] = 0;
	return dest;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (i < --size)
		ft_strcpy(dest, src);
	i = lensrc;
	if (i < size)
		ft_strcpy(dest, src);
	dest[size] = 0;

	return (lensrc);
}


#include <bsd/string.h> // https://github.com/xdp-project/xdp-tools/issues/1
#include <stdio.h>
int main(void)
{
	char tab[] = "salut a toi";
	char tab1[] = "salut a toi";
	char dest[100];
	char dest1[100];
	int size = 10;
	int res;
	int res1;

	res = strlcpy(dest, tab, size);
	res1 = ft_strlcpy(dest, tab, size);
	printf("%d\n", res);
	printf("%d\n", res1);

	return (0);
}