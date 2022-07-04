/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:13:17 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/13 12:22:34 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            ft_swap(&tab[i], &tab[i + 1]);
            i = -1;
        }
        i++;
    }
}

/*
int main()
{
    int tab[] = {5, 9, 8, 45, -9, 48, 56, 5};
    int i = 0;
    int size = sizeof(tab) / sizeof(int);
    ft_sort_int_tab(tab, size);
    while(i < size )
    {
        ft_putnbr(tab[i]);
        ft_putchar(' ');
        i++;
    }
}*/
