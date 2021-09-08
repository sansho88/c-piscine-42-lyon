/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:44:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/07 12:48:47 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef PROJECTS_MYLIB_H
#define PROJECTS_MYLIB_H
# include "unistd.h"
void ft_putchar(char c)
{
    _write(1, &c, 1);
}

#endif //PROJECTS_MYLIB_H
