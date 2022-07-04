/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:34:00 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/19 14:55:01 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str)
{
	int neg;
	int num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
/*
int	ft_isSpace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	else
		return (0);
}

int	isNum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	signe;
	int	i;

	i = 0;
	signe = 1;
	nb = 0;
	while (ft_isSpace(str[i]) && str[i])
		i++;
	while (str[i])
	{
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signe *= -1;
			i++;
		}
		if (!isNum(str[i]))
			return (nb * signe);
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * signe);
} */
