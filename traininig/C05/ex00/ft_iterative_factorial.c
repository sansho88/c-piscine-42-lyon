/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:01:51 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/20 11:13:35 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_iterative_factorial(int nb)
{
	int	i;
	int result;

	if (nb < 1)
		return (0);
	i = 1;
	result = 1;
	while (i < nb)
		result *= ++i;
	return (result);
}

/*
int main(void)
{
	ft_putnbr(ft_iterative_factorial(5));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(10));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(-5));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(42));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(1));
}*/
