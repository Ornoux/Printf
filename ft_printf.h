/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:07:36 by nicolas           #+#    #+#             */
/*   Updated: 2023/04/15 19:30:06 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int             ft_printf(const char *str, ...);
int             ft_printstr(char *str);
int             ft_printnbr(int nb);
unsigned int    ft_printunsnbr(int nb);
void            ft_putchar(char c);

# endif