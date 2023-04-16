/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:22:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/04/16 14:54:04 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_printunsnbr(unsigned int nb)
{
	int	i;

	i = 0;
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
