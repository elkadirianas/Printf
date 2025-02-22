/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:57:22 by aelkadir          #+#    #+#             */
/*   Updated: 2024/11/21 19:57:24 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	len_b;
	int	len;

	len = 0;
	len_b = ft_strlen(base);
	if (nbr >= (unsigned long)len_b)
		len += ft_putnbr_base(nbr / len_b, base);
	ft_putchar(base[nbr % len_b]);
	len++;
	return (len);
}
