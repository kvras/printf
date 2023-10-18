#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

void	ft_putunsigned(unsigned int nbr);
void	ft_puthex(int nbr,char format);
void	ft_putchar(char c);
void	ft_putstr(char *string);
void	ft_putnbr(int nb);

#endif
