/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:45:00 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/09 12:43:40 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void printnbs2(char a, char b, char c, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    ft_putchar(d);
    if (a <= '9' && b <= '8' && c <= '9' && d <= '9')
        _write(1, ", ", 2);
}

void ft_print_comb2()
{
    char    a;
    char    b;
    char    c;
    char    d;

    d = '0';
    c = d;
    b = d;
    a = d++;
    while (a <= '9' && b <= '8')
        while (b >= a)
        {
            while (d <= '9')
                printnbs2(a, b, c, d++);
            d = b;
            c++;
            if (c > '9') {
                c = b++;
                d = b+1;
            }
            if (b > '9')
                b = a++;
        }
}