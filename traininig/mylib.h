/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:44:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/14 12:35:05 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef MYLIB_H
#define MYLIB_H
# include "unistd.h"
/*Ne pas oublier d'update les fichiers sources dans le CMakeList.txt */
void    ft_putchar(char c);
void    ft_putnbr(int nb);
int     ft_strlen(char *str);
void    ft_putstr(char *str);
void    ft_swap(int *a, int *b);
char 	*ft_strcpy(char *dest, char *src);
char 	*ft_strncpy(char *dest, char *src, unsigned int n);
int 	ft_str_is_alpha(char *str);
int 	ft_str_is_numeric(char *str);
int 	ft_str_is_lowercase(char *str);
int 	ft_str_is_uppercase(char *str);
int 	ft_str_is_printable(char *str);
char 	*ft_strupcase(char *str);
char 	*ft_strlowcase(char *str);

#endif //PROJECTS_MYLIB_H
