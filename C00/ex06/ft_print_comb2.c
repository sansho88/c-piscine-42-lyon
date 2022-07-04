/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:18:56 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/09 12:15:40 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a)
{
	write(1, &a, 1);
}

/*format: [groupe1 groupe2, .. ..] */
void	ft_print_comb2(void)
{
	char	groupe1;
	char	groupe2;
	int		max;

	groupe1 = 0;
	groupe2 = 1;
	max = 99;
	while (groupe1 < 99)
	{
		ft_print(groupe1 / 10 + '0');
		ft_print(groupe1 % 10 + '0');
		ft_print(' ');
		ft_print(groupe2 / 10 + '0');
		ft_print(groupe2 % 10 + '0');
		if (groupe1 < max - 1)
		{
			write(1, ", ", 2);
		}
		if (++groupe2 > max)
		{
			groupe2++;
			groupe2 = ++groupe1 + 1;
		}
	}
}
