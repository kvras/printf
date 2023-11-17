/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:29:37 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:29:52 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c, int *len, int *erreur)
{
	*erreur = write(1, &c, 1);
	if (*erreur == -1)
		return ;
	(*len)++;
}