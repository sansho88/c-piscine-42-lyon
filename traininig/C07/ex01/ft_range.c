/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:16:05 by tgriffit          #+#    #+#             */
/*   Updated: 2021/10/25 15:32:47 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (0);
	res = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
		res[i++] = min++;
	return (res);
}
/*

#include <stdio.h>
int main(void)
{
	int *tab;
	int min = -50;
	int max = 50;
	tab = ft_range(min,max);
	int i = -1;
	while (++i < max - min)
	{
		printf("%d\n",tab[i]);
	}
	free(tab);
	return (0);
}*/
