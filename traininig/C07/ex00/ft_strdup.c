/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:23:59 by tgriffit          #+#    #+#             */
/*   Updated: 2021/10/25 15:31:55 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "mylib.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	if (!src)
		return (0);
	dst = malloc(ft_strlen(src) * sizeof(char));
	i = 0;
	while (src[i])
		dst[i] = src[i++];
	dst[i] = '\0';
	return (dst);
}

/*

int main()
{
	char *src = "Chocapic";
	char *dst;
	ft_putstr("Taille de la source: ");
	ft_putnbr(ft_strlen(src));
	ft_putstr("\nTaille de la dest: ");
	dst= ft_strdup(src);
	ft_putnbr(ft_strlen(dst));
	COMP(src, dst);
}*/
