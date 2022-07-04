/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdefosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:25:03 by cdefosse          #+#    #+#             */
/*   Updated: 2021/08/15 20:14:19 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strlen(char	*arg);
void	ft_putstr(char	*args);

void	ft_error(int code)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
	if (code == 1)
		ft_putstr("Not enough args. Usage: \"1 2 3 ... 1 \"");
	else if (code == 2)
		ft_putstr("Too much args");
	else if (code == 3)
		ft_putstr("Format is not valid. Usage: 16 chars bitwin 1 to 4.");
	else if (code == 4)
		ft_putstr("No solution can be found with these parameters");
	else
		ft_putstr("No solution found");
}

int	ft_is_right_format(char	*arg)
{	
	int	size;

	size = ft_strlen(arg);
	if (size != 16)
	{
		ft_error(3);
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_strlen(char	*arg)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] >= '1' && arg[i] <= '4')
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
