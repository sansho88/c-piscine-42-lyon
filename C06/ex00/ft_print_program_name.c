/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:01:05 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/26 21:53:30 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	argvlen;

	(void)argc;
	argvlen = 0;
	while (argv[0][argvlen])
		argvlen++;
	write(1, argv[0], argvlen);
	write(1, "\n", 1);
	return (0);
}
