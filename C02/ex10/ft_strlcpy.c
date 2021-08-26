/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:50:00 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/26 20:14:06 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (i < size - 1)
	{
		while (i < srclen + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}

//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
//{
//	unsigned int i;
//	unsigned int j;
//
//	i = ft_strlen(src);
//	if (i + 1 < size)
//	{
//		j = -1;
//		while (++j < i + 1)
//			dest[j] = src[j];
//	}
//	else if (size)
//	{
//		j = -1;
//		while (++j < size - 1)
//			dest[j] = src[j];
//		dest[j] = '\0';
//	}
//	return (i);
//}

#include "printf.h"

int main(void)
{
	unsigned int res;
	char a[100] = "hshshs";
	char b[] = "abcdefgh";
	char c[] = "hshshs";
	char d[] = "abcdefgh";
	int size = 3;

	printf("Output: %i\nExpected output: %lu\n", ft_strlcpy(a, b, size), strlcpy(c,d, size));
	printf("char copied: %s\nExpected char copied: %s\n",a,c);
	return (0);
}