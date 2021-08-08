/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:14:04 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/07 19:20:23 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int result, reste;
	int *ptrresult = &result;
	int *ptrReste = &reste;

	ft_div_mod(42,8, ptrresult, ptrReste);
	printf("result: %d, reste:%d \n", *ptrresult, *ptrReste);

}
