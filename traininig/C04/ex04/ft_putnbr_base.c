/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:43:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/17 14:46:00 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_check_base(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (!base || ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		c = base[i];
		if (!(c >= '0' && c <= '9') && (!(c >= 'a' && c <= 'z')
				&& !(c >= 'A' && c <= 'Z')))
			return (0);
		j = i++;
		while (base[++j])
			if (c == base[j])
				return (0);
	}
	return (1);
}

void ft_putnbr_base(int nb, char *base)
{
	unsigned int	temp;
	unsigned int	size;

	temp = nb;
	size = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			temp = -nb;
		}
		if (temp > size - 1)
			ft_putnbr_base(temp / size, base);
		temp %= size;
		ft_putchar(base[temp]);
	}
}

int main(void)
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
	ft_putnbr_base(88, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(max, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(min, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(max, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(5, "");
	ft_putchar('\n');
	ft_putnbr_base(max, "a");
	ft_putchar('\n');
	ft_putnbr_base(10, "abb");
	ft_putchar('\n');
	ft_putnbr_base(428, "-012345678cd ..	9");
	ft_putchar('\n');

}