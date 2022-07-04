/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_fonctionnel.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:11:23 by tgriffit          #+#    #+#             */
/*   Updated: 2021/08/12 21:15:27 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
 int    is_numeric(char str)
{
    if (str >= '0' && str <= '9')
        return (1);
    return (0);
}

int    is_uppercase(char str)
{
    if (str >= 'A' && str <= 'Z')
        return (1);
    return (0);
}

int    is_lowercase(char str)
{
    if (!(str >= 'a' && str <= 'z'))
        return (0);
    return (1);
}

int    is_alphanumeric(char str)
{
    if ((is_lowercase(str) || is_uppercase(str)))
        return (1);
    return (0);
}

char    *ft_strcapitalize(char *str)
{
    int    i;
    
    i = 0;
    while(str[i])
      {
        if (is_uppercase(str[i]))
            str[i] +=32;
       i++; 
      }
    i = 0;
    while (str[i])
    {
        if (is_alphanumeric(str[i]))
        {
            if (is_lowercase(str[i]) && !is_numeric(str[i - 1]))
                str[i] -= 32;
            i++;
            while (is_alphanumeric(str[i]))
            {
                if (is_uppercase(str[i]) || is_numeric(str[i - 1]))
                    str[i] += 32;
                i++;
            }
        }
        i++;
    }
    return (str);
}
