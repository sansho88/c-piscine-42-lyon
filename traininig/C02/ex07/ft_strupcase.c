/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:26:09 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 12:54:18 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}


/*int main()
{
	ft_putstr(ft_strupcase("Un chocapic danse avec un nesquick sur un zebre."));
	ft_putstr(ft_strupcase("http://twitter.com/42Lyon/status/1437718173659324416"));
}*/
