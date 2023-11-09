/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:30:06 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:30:07 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int nb, int *i)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", i);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-', i);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10, i);
			ft_putnbr(nb % 10, i);
		}
		else
			ft_putchar(nb + 48, i);
	}
}
