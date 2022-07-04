/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:03:39 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/22 18:03:39 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return ("Error\n");
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		|| (str[i] == ' ') || (str[i] == ',')
	{
		if (str[i] < ' ') || (str[i] > ' ' && str[i] < '+')
			|| (str[i] > ',' && str[i] < '0') || (str[i] > '9')
			return ("Error\n");
	num = num * 10 + (str[i] - '0');
	i++;
}
return (num);
}
