/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:57:46 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/26 12:18:01 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	unsigned int	temp;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = -nb;
	}
	else
		temp = nb;
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		temp %= 10;
	}
	ft_putchar(temp + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (!par)
		return ;
	while (par[i].str)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		write(1, par[i].copy, ft_strlen(par[i].copy));
		ft_putchar('\n');
		i++;
	}
}
