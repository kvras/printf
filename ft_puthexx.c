/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <miguiji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:14:52 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/18 12:15:14 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexx(unsigned int nbr, char format, int *len, int *erreur)
{
	ft_puthex((unsigned long long)nbr, format, len, erreur);
}
