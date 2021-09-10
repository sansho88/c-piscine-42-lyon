/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n ft_div_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:15:12 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/07 12:15:12 by tgriffit         ###   ########lyon.fr   */
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
