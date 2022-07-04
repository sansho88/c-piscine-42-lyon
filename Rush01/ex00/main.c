/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:36:39 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/15 20:57:57 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_is_right_format(argv[1]) && params_is_valid(argv[1]))
			ft_showgrill(argv[1]);
		if (!params_is_valid(argv[1]))
			ft_error(4);
	}
	else if (argc < 2)
		ft_error(1);
	else
		ft_error(2);
	return (0);
}
