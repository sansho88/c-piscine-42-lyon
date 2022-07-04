/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:54:46 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 11:55:34 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i] < 'A' || str[i++] > 'Z')
			return (0);
	return (1);
}