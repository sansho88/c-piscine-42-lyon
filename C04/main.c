/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:07:05 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/18 23:13:42 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int main ()
{
	printf("----------------------\n");
	printf("%d\n", ft_atoi_base("111000", "01"));
	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("52", "01234567"));
	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("7fffffff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "0123-456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "01\r23456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "abcc"));
	printf("%d\n", ft_atoi_base("ff", ""));
	printf("%d\n", ft_atoi_base("ff", "a"));
	
	char *s1 = "jesuis7";
	printf("%d\n", ft_strlen(s1));

	char *s = "bonjour toi <3";
	ft_putstr(s);
	printf("\n");

	printf("----------------------\n");
	ft_putnbr(0); printf("\n");
	ft_putnbr(42); printf("\n");
	ft_putnbr(-42); printf("\n");
	ft_putnbr(INT_MAX); printf("\n");
	ft_putnbr(INT_MIN); printf("\n");

	printf("----------------------\n");
	char *s_happypath = "42";
	char *s_happypathn = "-42";
	char *s_int0 = "0";
	char *s_intmax = "2147483647";
	char *s_intmin = "-2147483648";
	char *spaces = "  \t\n\v\f\r  43";
	char *neg = " -+--++36";
	char *pos = "++--+++--4";
	char *garbage_tail = "76iqu21#!@";
	char *all = "\n\t  \v++++---12341234#3%^@";
	char *subject_test = " ---+--+1234ab567";
	char *nothing = "  --+qwer";
	printf("%d\n", ft_atoi(s_happypath));
	printf("%d\n", atoi(s_happypath));
	printf("%d\n", ft_atoi(s_happypathn));
	printf("%d\n", atoi(s_happypathn));
	printf("%d\n", ft_atoi(s_int0));
	printf("%d\n", atoi(s_int0));
	printf("%d\n", ft_atoi(s_intmax));
	printf("%d\n", atoi(s_intmax));
	printf("%d\n", ft_atoi(s_intmin));
	printf("%d\n", atoi(s_intmin));
	printf("%d\n", ft_atoi(spaces));
	printf("%d\n", atoi(spaces));
	printf("%d\n", ft_atoi(neg));
	printf("-36\n");
	printf("%d\n", ft_atoi(pos));
	printf("4\n");
	printf("%d\n", ft_atoi(garbage_tail));
	printf("%d\n", atoi(garbage_tail));
	printf("%d\n", ft_atoi(all));
	printf("-12341234\n");
	printf("%d\n", ft_atoi(subject_test));
	printf("-1234\n");
	printf("%d\n", ft_atoi(nothing));
	printf("%d\n", atoi(nothing));

	printf("----------------------\n");
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
	ft_putnbr_base(max, "");
	ft_putchar('\n');
	ft_putnbr_base(max, "a");
	ft_putchar('\n');
	ft_putnbr_base(max, "abb");
	ft_putchar('\n');
	ft_putnbr_base(max, "-012345678cd ..	9");
	ft_putchar('\n');

	printf("----------------------\n");
	printf("%d\n", ft_atoi_base("111000", "01"));
	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("52", "01234567"));
	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("7fffffff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "0123-456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "01\r23456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "abcc"));
	printf("%d\n", ft_atoi_base("ff", ""));
	printf("%d\n", ft_atoi_base("ff", "a"));
}
