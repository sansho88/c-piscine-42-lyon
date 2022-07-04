/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:38:50 by dbouron           #+#    #+#             */
/*   Updated: 2021/08/08 11:46:13 by dbouron          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(char start, char middle, char end, long size)
{
	int	i;

	if (size > 0)
	{
		ft_putchar(start);
		i = 0;
		while (i++ < size - 2)
		{
			ft_putchar(middle);
		}
	}
	if (size > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(long long x, long long y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		ft_line('A', 'B', 'A', x);
		i = 0;
		while (i++ < y - 2)
		{
			ft_line('B', ' ', 'B', x);
		}
		if (y > 1)
		{
			ft_line('C', 'B', 'C', x);
		}
	}
}
