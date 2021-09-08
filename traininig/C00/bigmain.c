/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:41:42 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/08 12:23:10 by tgriffit         ###   ########lyon.fr   */
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
    ft_putchar(ft_readfile() + '0');
    ft_putchar('\n');
}