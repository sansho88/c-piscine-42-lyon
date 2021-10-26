/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:05:47 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/21 14:06:24 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
int main(void)
{
	ft_putnbr(ft_find_next_prime(5));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(8));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(18));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(42));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(128));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(INT_MIN));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(2147483647 - 50));
	ft_putstr(" vs ");
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(46340 * 46341));
}*/
