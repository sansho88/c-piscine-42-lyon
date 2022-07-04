/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:24:22 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/20 15:09:28 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 46340)
		return (0);
	while (i * i < nb)
		i++;
	if (nb % i == 0 && nb == i * i)
		return (i);
	return (0);
}

/*

int main(void)
{
	ft_putnbr(ft_sqrt(5));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(5));
	ft_putchar('\n');

	ft_putnbr(ft_sqrt(42));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(42));
	ft_putchar('\n');

	ft_putnbr(ft_sqrt(100));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(100));
	ft_putchar('\n');

	ft_putnbr(ft_sqrt(16));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(16));
	ft_putchar('\n');

	ft_putnbr(ft_sqrt(-5));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(-5));
	ft_putchar('\n');

	ft_putnbr(ft_sqrt(INT_MAX));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(INT_MAX));
	ft_putchar('\n');

	ft_putnbr(ft_sqrt(46339 * 46339));
	ft_putstr(" vs ");
	ft_putnbr(sqrt(46339 * 46339));
	ft_putchar('\n');
}*/
