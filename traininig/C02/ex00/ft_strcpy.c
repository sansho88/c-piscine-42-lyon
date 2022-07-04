/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:50:35 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/13 15:42:21 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*ft_strcpy(char *dest, char *src)
{
    int	i;

    i = 0;
    while (src[i])
        dest[i] = src[i++];
    dest[i] = 0;
    return dest;
}
