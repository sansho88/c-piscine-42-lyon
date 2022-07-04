/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:10:42 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/26 11:37:12 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	dest = malloc((sizeof(char) * ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tstock;

	if (ac < 0)
		ac = 0;
	tstock = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tstock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tstock[i].size = ft_strlen(av[i]);
		tstock[i].str = av[i];
		tstock[i].copy = ft_strdup(av[i]);
		i++;
	}
	tstock[i].str = 0;
	return (tstock);
}
