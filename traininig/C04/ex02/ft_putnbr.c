/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:52:23 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/13 13:44:44 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "mylib.h"

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