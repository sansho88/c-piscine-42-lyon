/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:35:00 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/23 23:01:22 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sizerange;
	int	i;

	i = 0;
	sizerange = max - min;
	if (sizerange <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * sizerange);
	if (!*range)
		return (-1);
	while (i < sizerange)
	{
		(*range)[i] = min++;
		i++;
	}
	return (sizerange);
}
