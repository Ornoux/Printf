/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:26:00 by nicolas           #+#    #+#             */
/*   Updated: 2023/04/15 19:34:06 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int    ft_printchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_whattype(va_list arg, const char str)
{
    int count;

    count = 0;
    if (str == 'c')
        count += ft_printchar(va_arg(arg, int));
    if (str == 's')
        count += ft_printstr(va_arg(arg, char *));
    if (str == 'd')
        count += ft_printnbr(va_arg(arg, int));
    if (str == 'i')
        count += ft_printnbr(va_arg(arg, int));
    if (str == 'u')
        count += ft_printunsnbr(va_arg(arg, int));
    return (count);
}

int ft_printf(char const *str, ...)
{  
    va_list arg;
    int     i;
    int     count;

    i = 0;
    count = 0;
    va_start(arg, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            count += ft_whattype(arg, str[i + 1]);
            i++;
        }
        else
            count += ft_printchar(str[i]);
        i++;
        
    }
    va_end(arg);
    return (count);
}

int main()
{
    int *ptr;
    int tr;
    ptr = &tr;

    tr = 10;
    /*ft_printf("%d + %d = %d\n\n", variable, var, variable + var);*/
    ft_printf("%p\n\n", ptr);
}





