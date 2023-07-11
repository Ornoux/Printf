/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:07:36 by nicolas           #+#    #+#             */
/*   Updated: 2023/04/18 12:03:33 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_printstr(char *str);
int				ft_printnbr(int nb);
int				ft_printunsnbr(unsigned int nb);
void			ft_putchar(char c);
int				ft_printhexbnbr(unsigned long long nb);
int				ft_printhexlnbr(unsigned long long nb);
int				ft_printchar(char c);

#endif