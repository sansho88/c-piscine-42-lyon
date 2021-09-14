/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:52:26 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 12:59:59 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return str;
}

/*int main()
{
	ft_putstr(ft_strlowcase("UN CHOCAPIK DANSE AVEC UN NESQUICK SUR UN "
							"ZEBRE."));
	ft_putstr(ft_strlowcase("HTTP://TWITTER"
						  ".COM/42LYON/STATUS/1437718173659324416"));
}*/
