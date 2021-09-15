/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:04:50 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/15 18:26:44 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int nbcharstofind;
	int sizetofind;

	if (!to_find)
		return (str);
	i = 0;
	sizetofind = ft_strlen(to_find);
	while(str[i])
	{
		nbcharstofind = 0;
		while (str[i + nbcharstofind] == to_find[nbcharstofind])
			if (++nbcharstofind == sizetofind)
				return (str + i);
		i++;
	}
	return (str);
}

int main (void)
{
	char *phrase = "Un chocapic et un nesquick se baladent ensemble.";
	char *tofind = "un";

	ft_putstr(ft_strstr(phrase, tofind));
}