/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:51:29 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/16 15:18:56 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	temp;

	temp = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		temp = -nb;
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
	}
	temp %= 10;
	ft_putchar(temp + '0');
}
