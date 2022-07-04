/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:19:47 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/16 18:30:25 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nb)
{
	printchar(nb + '0');
}
void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	//TODO...maybe
}
