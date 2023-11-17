/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:30:21 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:30:23 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *string, int *len, int *erreur)
{
	if (string == NULL)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	while (*string)
	{
		if (*erreur == -1)
			return ;
		ft_putchar(*string,len, erreur);
		string++;
	}
}