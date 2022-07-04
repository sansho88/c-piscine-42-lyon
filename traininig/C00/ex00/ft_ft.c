/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:59:12 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/06 13:09:02 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//ex00
void	ft_putchar(char c)
{
write(1, &c, 1);
}

//ex01
void	ft_alphabet(void)
{
	char	start = 'a';

	while(start<='z')
	{
		ft_putchar(start++);
	}
}

//ex02
void	ft_reverse_alpha(void)
{
	char start = 'z';

	while(start >= 'a') ft_putchar(start--);
}

//ex03
void	ft_showChiffres(void)
{
	int	start = '0';

	while(start<='9') ft_putchar(start++);
}

//ex04
void ft_is_negative(int nbr)
{
	if(nbr<0) ft_putchar('N');
	else
		ft_putchar('P');
}

//ex05
//

void	ft_print_comb(void)
{
	char	a = '0';
	char	b =	a+1;
	char	c = b +1;

	while(a <= '7')
	{
		
		while(b <= '8')
		{
			
			while(c <= '9')
			{	
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if(!(a == '7' && b =='8' && c =='9'))
					write(1, ", ", 2);
				++c;
			}
			c = ++b +1;

		}
		b = a++ +1;
	}

}

void	ft_print_comb2()
{
	char	a = '0'
}

int main(void)
{
	ft_alphabet();
	ft_putchar('\n');
	ft_reverse_alpha();
	ft_putchar('\n');
	ft_showChiffres();
	ft_putchar('\n');
	ft_is_negative(-42);
	ft_putchar('\n');
	ft_print_comb();
	ft_putchar('\n');
	ft_print_comb2();
}
