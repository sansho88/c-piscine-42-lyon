/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:44:12 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/13 16:08:51 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
		dest[i] = src[i++];
	while (i < n)
		dest[i++] = 0;
	return dest;
}



#include <string.h>
#include <stdio.h>
int main() {
	char dest[10];
	char dest1[10];
	char src[] = "salut";
	int size = 5;

	printf("dest  ====> %s\n", ft_strncpy(dest, src, size));
	printf("      ====> %s\n", strncpy(dest1, src, size));

	return 0;
}