/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showgrill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:48:14 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/14 18:08:40 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"

void	ft_splitgrill(int tab[], int *part1, int *part2)
{
	int	size;
	int i;
	int	j;

	i = 0;
	j = 0;
	size = sizeof(tab)/sizeof(int);
	while (i < size / 2)
	{
		part1[i] = tab[i];
		i++;
	}
	while (i < size)
	{
		part2[j] = tab[i];
		j++;
		i++;
	}

}

void	ft_showgrill(int tab[])
{
	int	result[16];

	if (is_rightformat(tab))
		result = ft_createcombi(tab);
}
