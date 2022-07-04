/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:50:36 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/21 14:06:00 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i * i <= nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

/*
int main (void)
{
	ft_putnbr(ft_is_prime(5));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(42));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(1));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(49));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(17));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(19));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(43));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(4));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(2));
	ft_putchar('\n');
}*/
