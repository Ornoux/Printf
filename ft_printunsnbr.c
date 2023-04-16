/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:22:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/04/15 19:29:01 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

unsigned int ft_printunsnbr(int nb)
{
    int i;

    i = 0;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 12);
        return (i + 11);
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
        i = 1;
    }
    if (nb >= 0 && nb < 10)
    {
        ft_putchar(nb + '0');
        i++;
    }
    if (nb >= 10)
    {
        ft_printunsnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
        i++;
    }
    return (i);
}