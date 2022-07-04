/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiffrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:06:45 by csiffrei          #+#    #+#             */
/*   Updated: 2021/08/15 20:57:52 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	params_is_valid2(char	*params, int	i, int	*tab);

int	params_is_valid(char	*params)
{
	int	i;
	int	tab[4];

	i = 0;
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	while (params[i] && i <= 3)
	{
		if (params[i] == '1')
		{
			tab[0] += 1;
			if (tab[0] == 0 || tab[0] > 2)
				return (0);
		}
		if (params_is_valid2(params, i, tab) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	params_is_valid2(char	*params, int	i, int	*tab)
{
	if (params[i] == '2')
	{
		tab[1] += 1;
		if (tab[1] > 3)
			return (0);
	}
	if (params[i] == '3')
	{
		tab[2] += 1;
		if (tab[2] > 2)
			return (0);
	}
	if (params[i] == '4')
	{
		tab[3] += 1;
		if (tab[3] > 1)
			return (0);
	}
	return (1);
}
