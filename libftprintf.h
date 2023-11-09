/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
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

void    ft_putadresse(long long nbr, int *i);
void	ft_putunsigned(unsigned int nbr, int *len);
void	ft_puthex(long long nbr, char format, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *string, int *len);
void	ft_putnbr(int nb,int *len);
int	    ft_printf(char *format,...);
#endif