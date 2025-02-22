/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:57:48 by aelkadir          #+#    #+#             */
/*   Updated: 2024/11/21 19:57:51 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(unsigned long nbr);
int	ft_strlen(char *str);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);

#endif
