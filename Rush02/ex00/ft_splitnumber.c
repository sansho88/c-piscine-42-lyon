/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:03:39 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/22 18:03:39 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ourlib.h"

struct	s_Dict{
	struct s_Line	structLine;
};

struct s_Line{
	int		key;
	char	*value;
};

char	**ft_splitnumber(char *str)
{
	char	**nbsplit;
	int		nbrsize;
	int		i;
	int		j;

	nbrsize = ft_strlen(str);
	nbsplit = malloc((nbrsize * nbrsize) * sizeof(int) + 1);
	j = 0;
	while (nbrsize > 1)
	{
		nbsplit[i][j] = str[j];
		if (nbrsize % 3 != 0)
			ft_fill0(&nbsplit[i][j], nbrsize--);
		i++;
		j++;
	}
	return (nbsplit);
}

void	initDictStruct(char **textfile)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (textfile[i])
	{
	}
}
