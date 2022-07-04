/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:48:19 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/12 15:58:25 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_tohexa(char str)
{
	const char	*refhexa;

	refhexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(refhexa[(unsigned char)str / 16]);
	ft_putchar(refhexa[(unsigned char)str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
			str_tohexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
