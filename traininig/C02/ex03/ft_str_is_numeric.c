/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:19:48 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 11:49:34 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i] < '0' || str[i++] > '9')
			return (0);
	return (1);
}

/*
int main()
{
	ft_putnbr(ft_str_is_numeric("01234567898"));
	ft_putnbr(ft_str_is_numeric("0zer98"));
	ft_putnbr(ft_str_is_numeric("a01234567898"));
	ft_putnbr(ft_str_is_numeric("z01234567898"));
	ft_putnbr(ft_str_is_numeric(""));
}*/
