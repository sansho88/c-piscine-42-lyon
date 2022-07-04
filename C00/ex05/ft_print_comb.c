/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:18:18 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/09 12:03:16 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_printchars(char a, char b, char c);
char	ft_reset(char x);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_printchars(a, b, c);
				c++;
			}	
			b++;
		}
		a++;
	}
}

void	ft_printchars(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (!(c == '9' && b == '8' && a == '7'))
	{
		write(1, ", ", 2);
	}
}

char	ft_reset(char x)
{
	if (x > '9')
	{
		x = '0';
	}
	return (x);
}
