/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:41:42 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/10 17:00:56 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bigheader.h"
#include "mylib.h"

int main(void)
{
    ft_print_alphabet();
    ft_putchar('\n');
    ft_print_reverse_alphabet();
    ft_putchar('\n');
    ft_print_numbers();
    ft_putchar('\n');
    ft_is_neg(-42);
    ft_putchar('\n');
    ft_is_neg(42);
    ft_putchar('\n');
    ft_print_comb();
    ft_putchar('\n');
    //ft_putchar(ft_readfile() + '0');
    _write(1, "___________________________\n", 28);
   // ft_print_comb2(); Infinite Loop
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-42);
    ft_putchar('\n');
    ft_puttnbr(INT_MAX);
    ft_putchar('\n');
    ft_puttnbr(INT_MIN);
    ft_putchar('\n');

}