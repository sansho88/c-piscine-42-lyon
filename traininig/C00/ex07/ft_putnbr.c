/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:52:23 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/10 17:06:15 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void ft_putchar(char c);

void ft_putnbr(int nb)
{
    if (nb == INT_MIN) {
        _write(1, "-2147483648", 12);
        return ;
    }
    if (nb < 0) {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    nb %= 10;
    ft_putchar(nb + '0');
}
void	ft_puttnbr(int nb)
{
    unsigned int	temp;

    temp = nb;
    if (nb < 0)
    {
        ft_putchar('-');
        temp = -nb;
    }
    if (temp > 9)
        ft_putnbr(temp / 10);
    temp %= 10;
    ft_putchar(temp + '0');
}
