/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:31:50 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/08 15:22:56 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bigheader.h"

int	main(void)
{
	int a = 12, b = 8;
	int	*ptra = &a;
	int	*ptrb = &b;

	ft_ultimate_div_mod(ptra, ptrb);
	printf("a: %d, b: %d \n", a,b);
}
