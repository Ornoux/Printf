/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:40:52 by nicolas           #+#    #+#             */
/*   Updated: 2023/04/16 16:29:18 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	intmin(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 12);
	return (i + 11);
}

int	ft_printnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		intmin(-2147483648);
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
		ft_printnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
		i++;
	}
	return (i);
}
