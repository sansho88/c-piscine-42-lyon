/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:58:45 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/25 23:05:39 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
# include <stdlib.h>
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}t_stock_str;
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int	ft_strlen(char *str);
#endif
