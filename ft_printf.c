/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:28:54 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/09 17:28:56 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_format(char *format, va_list list, int *len)
{
	if(*(format + 1) == 'c')
		ft_putchar(va_arg(list,int), len);
	else if(*(format + 1) == 'd')
		ft_putnbr(va_arg(list,int), len);
	else if(*(format + 1) == 's')
		ft_putstr(va_arg(list,char *), len);
	else if(*(format + 1) == 'p')
		ft_putadresse(va_arg(list, long long), len);
	else if(*(format + 1) == 'X' || *(format + 1) == 'x')
		ft_puthex(va_arg(list,int),*(format + 1), len);
	else if(*(format + 1) == 'u')
		ft_putunsigned(va_arg(list, unsigned int), len);
	else if(*(format + 1) == '%')
		ft_putchar('%', len);
}
int	ft_printf(char *format,...)
{
	int i = 0;
	int len = 0;
	va_list list;
	va_start(list,format);
	while(format[i])
	{
		if(format[i] == '%')
		{
			check_format(&format[i],list,&len);
			i++;
		}
		else
			ft_putchar(format[i],&len);
		i++;
	}
	va_end(list);
	return len;
}
