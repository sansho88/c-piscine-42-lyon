/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:34:01 by tgriffit          #+#    #+#             */
/*   Updated: 2021/10/25 15:59:24 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	return (max - min);
}
/*

#include <stdio.h>
int main()
{
	int *range;
	int taille;
	int i;

	i = 0;
	taille = ft_ultimate_range(&range, 25, 25);
	printf("Taille = %d\n", taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	while (i < taille)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}*/
