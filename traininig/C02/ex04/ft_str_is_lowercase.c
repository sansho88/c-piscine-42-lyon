/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:46:35 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 11:49:14 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "mylib.h"

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i] < 'a' || str[i++] > 'z')
			return (0);
	return (1);
}