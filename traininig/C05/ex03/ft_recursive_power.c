/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:01:15 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/20 12:11:09 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (0);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main(void)
{
	ft_putnbr(ft_recursive_power(5,2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(15,5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(5,-2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(5,1));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(42,3));
	ft_putchar('\n');
}*/
