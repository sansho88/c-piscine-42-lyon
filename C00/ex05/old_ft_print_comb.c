/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:46:40 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/08 17:12:01 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < b)
	{
		while (c <= '9' && a <= '7' && b <= '8' )
		{
			printchars(a, b, c);
			if (c == '9')
			{
				c = '0';
				++b;
			}
			else
			{
				++c;
			}
			while (c <= b)
			{
				if (b < '9')
				{
					++c;
				}
				else
				{
					++a;
					b = '0';
					while (b <= a)
					{	
						++b;
					}
				}
			}
		}
	}
}

void printchars(char a, char b, char c)
{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			if (!(c == '9' && b == '8' && a == '7'))
			{
				write(1, ", ", 2);
			}
}
