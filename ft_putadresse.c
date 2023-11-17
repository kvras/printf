/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:30:30 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:30:32 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_puthex(unsigned long nbr, int *len, int *erreur)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr / 16 > 0)
		ft_puthex(nbr / 16, len, erreur);
	if (*erreur == -1)
		return ;
	ft_putchar(hex[nbr % 16], len, erreur);
}

void	ft_putadresse(void *ptr, int *len, int *erreur)
{
	unsigned long	add;

	add = (unsigned long)ptr;
	ft_putchar('0', len, erreur);
	if (*erreur == -1)
		return ;
	ft_putchar('x', len, erreur);
	if (*erreur == -1)
		return ;
	ft_puthex(add, len, erreur);
}