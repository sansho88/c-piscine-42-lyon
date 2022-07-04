/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:54:23 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 11:16:26 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(){
	ft_putnbr(ft_str_is_alpha("Un chocapic danse avec un nesquick sur un zebre.")); // 0 cuz spaces aren't letters
	ft_putnbr(ft_str_is_alpha("aBcdeFgpk"));
	ft_putnbr(ft_str_is_alpha("0123AEZPO"));
}*/
