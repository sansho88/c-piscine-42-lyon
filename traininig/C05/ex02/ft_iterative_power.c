/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:43:58 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/20 11:53:53 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 1)
		return (0);
	if (power < 2)
		return (nb);
	i = 0;
	result = nb;
	while ( ++i < power)
		result *= nb;
	return (result);
}

/*
int main(void)
{
	ft_putnbr(ft_iterative_power(5,2));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_power(15,5));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_power(5,-2));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_power(5,1));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_power(42,0));
	ft_putchar('\n');
}*/
