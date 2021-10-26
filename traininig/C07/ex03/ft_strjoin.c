/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:00:24 by tgriffit          #+#    #+#             */
/*   Updated: 2021/10/25 17:47:00 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	chars;

	i = 0;
	chars = 0;
	while (i < size)
		chars += ft_strlen(strs[i++]);
	return (chars);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	res = "";
	if (!size)
		return (res);
	res = malloc(ft_strslen(strs, size) + ft_strlen(sep) * size + 1);
	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			res[i + k] = strs[j][i++];
		j++;
		k += i;
		i = 0;
		while (sep[i])
			res[k++] = sep[i++];
	}
	res[k] = 0;
	return (res);
}
/*

#include <stdio.h>
int main()
{
	char *strs[3];
	char *str;
	strs[0] = "coucou je suis le programme";
	strs[1] = "shalla je marche";
	strs[2] = "sinon c est chiant en vrai";
	str = ft_strjoin(3, strs, "||,/,/,/,/,/|| ");
	printf("%s\n",str);
	free(str);
}*/
