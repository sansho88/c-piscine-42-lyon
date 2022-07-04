/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:22:40 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/18 20:27:20 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
