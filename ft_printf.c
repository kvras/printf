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

void	set_zero(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

int	back_slash_zero(char *str, int *i)
{
	if (str[(*i) + 1] != '\0')
	{
		(*i)++;
		return (1);
	}
	return (0);
}

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
		ft_puthexx(va_arg(list, unsigned int), *(format + 1), len, erreur);
	else if (*(format + 1) == 'u')
		ft_putunsigned(va_arg(list, unsigned int), len, erreur);
	else if (*(format + 1) == '%')
		ft_putchar('%', len, erreur);
	else if (*(format + 1) != '\0')
		ft_putchar(*(format + 1), len, erreur);
	return ;
}

int	ft_printf(char *format, ...)
{
	int		i;
	int		len;
	int		erreur;
	va_list	list;

	set_zero(&i, &len, &erreur);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			check_format(&format[i], list, &len, &erreur);
			if (back_slash_zero(format, &i) == 0)
				return (len);
		}
		else
			ft_putchar(format[i], &len, &erreur);
		if (erreur == -1)
			return (-1);
		if (back_slash_zero(format, &i) == 0)
			return (len);
	}
	va_end(list);
	return (len);
}
