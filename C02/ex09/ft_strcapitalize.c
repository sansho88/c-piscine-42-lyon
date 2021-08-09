/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:08:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/09 21:13:15 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*if isLowCase
 * if  */
int	is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
//TODO: is_alphanumeric (=letters + numbers)
int	is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_alphanumeric(str[i])
		{
			if(is_lowercase(str[i]))
			{
				str[i] -=32;
			}
			i++;
			while(is_alphanumeric(str[i])
			{
				if(is_uppercase(str[i])
				{
					str[i] +=32;
				}
			}
		i++;
	}
}

