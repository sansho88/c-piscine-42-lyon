/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:52:34 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 16:53:42 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int char_is_alpha(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int char_is_num(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	*str = *ft_strlowcase(str);
	while (str[i])
	{
		if (char_is_alpha(str[i]) && !char_is_num(str[i - 1]))
			str[i++] -= 32;
		while (char_is_alpha(str[i]))
			i++;
		i++;
	}
	return (str);
}

/*
int main()
{
	ft_putstr(ft_strcapitalize("salut, comment tu vas ? 42mots quarante-deux;"
							   " cinquante+et+un"));
}*/
