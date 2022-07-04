/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:32:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/22 21:30:50 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include "lib/ourlib.h"

typedef struct s_map
{
	char	*key;
	char	*value;
}	t_map;

char	*ft_get_value(t_map *items, int size, const char *key)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(items[i].key, key) == 0)
		{
			return (*(&items[i].value));
		}
	}
	return (NULL);
}

void	put_data(char *key, char *value, t_map map)
{

	map.key = key;
	map.value = value;
}