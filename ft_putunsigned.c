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

void	ft_putunsigned(unsigned int nbr, int *len)
{
	if(nbr > 9)
	{
		ft_putunsigned(nbr / 10, len);
		ft_putunsigned(nbr % 10, len);
	}
	else
		ft_putchar(nbr + 48, len);
}
