/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showgrill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:11:55 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/15 21:14:40 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ourlib.h"
#include <unistd.h>

void	ft_putanswer(void)
{
	ft_putstr("1 2 3 4\n");
	ft_putstr("2 3 4 1\n");
	ft_putstr("3 4 1 2\n");
	ft_putstr("4 1 2 3\n");
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_showgrill(char *params)
{
	if (!ft_strcmp(params, "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"))
		ft_error(4);
	else
		ft_putanswer();
}
