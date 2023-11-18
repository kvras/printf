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

void	ft_putadresse(void *ptr, int *len, int *erreur)
{
	ft_putchar('0', len, erreur);
	if (*erreur == -1)
		return ;
	ft_putchar('x', len, erreur);
	if (*erreur == -1)
		return ;
	ft_puthex((unsigned long long)ptr, 'x' , len, erreur);
}