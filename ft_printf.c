/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:44 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:20:46 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_format(char *format, va_list list, int *len, int *erreur)
{
	if (*(format + 1) == 'c')
		ft_putchar(va_arg(list, int), len, erreur);
	else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		ft_putnbr(va_arg(list, int), len, erreur);
	else if (*(format + 1) == 's')
		ft_putstr(va_arg(list, char *), len, erreur);
	else if (*(format + 1) == 'p')
		ft_putadresse(va_arg(list, void *), len, erreur);
	else if (*(format + 1) == 'X' || *(format + 1) == 'x')
		ft_puthex_unsigned(va_arg(list, unsigned int), *(format + 1), len, erreur);
	else if (*(format + 1) == 'u')
		ft_putunsigned(va_arg(list, unsigned int), len, erreur);
	else if (*(format + 1) == '%')
		ft_putchar('%', len, erreur);
	else
		ft_putchar(*(format + 1), len, erreur);
}

int	ft_printf(char *format,...)
{
	int		i;
	int		len;
	int		erreur;
	va_list	list;

	i = 0;
	len = 0;
	erreur = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			check_format(&format[i], list, &len, &erreur);
			i++;
		}
		else
			ft_putchar(format[i], &len, &erreur);
		if (erreur == -1)
			return (-1);
		i++;
	}
	va_end(list);
	return (len);
}
