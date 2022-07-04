/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:56:07 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/17 12:19:05 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int result;
	int	i;
	int	past[2];

	result = 1;
	i = 2;
	past[1] = result;
	if (index <= 0)
		return (0);
	while (i < index)
	{
		past[0] = result;
		result += past[1];
		past[1] = past[0];
		i++;
	}
	return (result);
}
