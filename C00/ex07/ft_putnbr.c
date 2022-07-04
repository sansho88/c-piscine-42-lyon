/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 21:27:59 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/08 14:14:22 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	temp;

	temp = nb;
	if (nb < 0)
	{
		ft_printchar('-');
		temp = -nb;
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
	}
	temp %= 10;
	ft_printchar(temp + '0');
}
