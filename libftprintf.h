/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:27:58 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:28:37 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>

void    ft_putadresse(void * ptr, int *len, int *erreur);
void	ft_putunsigned(unsigned int nbr, int *len, int *erreur);
void	ft_putchar(char c, int *len, int *erreur);
void	ft_putstr(char *string, int *len, int *erreur);
void	ft_putnbr(int nb, int *len, int *erreur);
int     ft_printf(char *format, ...);
void	ft_puthex(unsigned long long nbr, char format, int *len, int *erreur);
void    ft_puthexx(unsigned int nbr, char format, int *len, int *erreur);

#endif