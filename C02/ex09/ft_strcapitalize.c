/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:08:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/26 17:59:31 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int	is_lowercase(char str)
{
	if (!(str >= 'a' && str <= 'z'))
		return (0);
	return (1);
}

int	is_alphanumeric(char str)
{
	if ((is_lowercase(str) || is_uppercase(str)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]) && (!is_numeric(str[i - 1])
				|| str[i - 1] == ' '))
			str[i] -= 32;
		while (is_alphanumeric(str[i]))
		{
			i++;
			if (is_numeric(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
