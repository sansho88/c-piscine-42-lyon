/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:50:00 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/16 18:54:14 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	i = 0;
	srclen = 0;
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (src[srclen])
		srclen++;
	dest[i] = '\0';
	return (srclen);
}
