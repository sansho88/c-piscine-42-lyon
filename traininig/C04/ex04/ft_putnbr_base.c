/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:43:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/16 14:01:14 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

/*NOT FINISHED AT ALL */
void	ft_putnbr_base(int nb, char *base)
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
		ft_putnbr(nb / ft_strlen(base));
	nb %= ft_strlen(base);
	ft_putchar(nb + '0');
	//ft_putstr(&base[nb % ft_strlen(base)]);
}

int main (void)
{
	int max = 2147483647;
	int min = -2147483648;
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(42, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(max, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(min, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(0, "0123456789");
	ft_putchar('\n');
	//ft_putnbr_base(max, "");
//	ft_putchar('\n');
	//ft_putnbr_base(max, "a");
	//ft_putchar('\n');
	ft_putnbr_base(10, "abb");
	ft_putchar('\n');
	ft_putnbr_base(428, "-012345678cd ..	9");
	ft_putchar('\n');

}