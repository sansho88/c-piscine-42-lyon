/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:12:23 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/20 12:22:43 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int main(void)
{
	ft_putnbr(ft_fibonacci(5));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(8));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(-5));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(2));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(3));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(12));
	ft_putchar('\n');
}*/
