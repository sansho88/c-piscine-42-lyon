/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ourlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:03:39 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/22 21:36:23 by tgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef OURLIB_H
# define OURLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/fcntl.h>

char 	**ft_slice(char *argv);
int		ft_atoi(char *str);
void		ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
char	ft_fill0(char *nbr, int nbrlen);
char	**ft_splitnumber(char *str);
char	**readfile(char *dict);
void	initDictStruct(char **textfile);

#endif
