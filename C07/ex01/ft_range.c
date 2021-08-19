/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:18:51 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/19 16:01:31 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
