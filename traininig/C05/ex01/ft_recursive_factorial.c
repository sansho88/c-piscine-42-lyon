/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:16:59 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/20 11:36:50 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (0);
	if (nb <= 2)
		return (nb);
	return (nb * ft_recursive_factorial( nb - 1 ));
}

/*
int main(void)
{
	ft_putnbr(ft_recursive_factorial(5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(10));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(-5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(42));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(1));
}*/
