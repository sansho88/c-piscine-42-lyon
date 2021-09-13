/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:44:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/10 19:05:27 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef PROJECTS_MYLIB_H
#define PROJECTS_MYLIB_H
# include "unistd.h"
void ft_putchar(char c)
{
    _write(1, &c, 1);
}

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

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    _write(1, str, ft_strlen(str));
}

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#endif //PROJECTS_MYLIB_H
