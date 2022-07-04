/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:45:12 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/26 21:58:28 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	printcolumns(char start, char mid, char end, long long size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		ft_putchar(start);
		while (i++ < size - 2)
		{
			ft_putchar(mid);
		}
		if (size > 1)
		{
			ft_putchar(end);
		}
	}
	ft_putchar('\n');
}

void	rush(long long x, long long y)
{
	int	i;

	i = 0;
	if (y > 0)
	{
		printcolumns('A', 'B', 'C', x);
		while (i++ < y - 2)
		{
			printcolumns('B', ' ', 'B', x);
		}
		if (y > 1)
		{
			printcolumns('A', 'B', 'C', x);
		}
	}
}
