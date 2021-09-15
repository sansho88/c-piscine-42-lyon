/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:20:22 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/15 16:37:30 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*basehexa;

	i = 0;
	basehexa = "0123456789abcdef";
	while (str[i])
		if (str[i] > 31 && str[i] < 127)
			ft_putchar(str[i++]);
		else
		{
			ft_putchar('\\');
			ft_putchar(basehexa[(unsigned char) str[i] / 16]);
			ft_putchar(basehexa[(unsigned char) str[i++] % 16]);
		}
}

/*
int main(void)
{
	char *test = "Coucou\ntu vas\200 bien ?";
	ft_putstr_non_printable(test);
}*/
