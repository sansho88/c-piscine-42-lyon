/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:51:34 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/16 12:37:09 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

/*
 * WARNING: This atoi is *NOT* as the true atoi!
 * This one takes headings '+' as valid chars
 */
int	ft_atoi(char *str)
{
	int nb;
	int signe;

	signe = 1;
	nb = 0;
	while (*str >= 8 && *str <= 13 || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			signe *= -1;
	while (*str >= '0' && *str <= '9')
		nb = (nb * 10) + (*str++ - '0');

	return (nb * signe);
}

/*
#include <stdio.h>
int main (void)
{
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
}*/
