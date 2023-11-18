/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:29:20 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:29:59 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(unsigned long long nbr, char format, int *len, int *erreur)
{
	char	*hex;

	if (format == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (nbr / 16 > 0)
		ft_puthex(nbr / 16,format, len, erreur);
	if (*erreur == -1)
		return ;
	ft_putchar(hex[nbr % 16], len, erreur);
}