#include "libftprintf.h"

static void	ft_puthex(unsigned long nbr, int *len, int *erreur)
{
	char	*hex;

	hex ="0123456789abcdef";
    if(nbr / 16 > 0)
        ft_puthex(nbr / 16, len, erreur);
    if(*erreur == -1)
        return ;
    ft_putchar(hex[nbr%16], len, erreur);
}

void    ft_putadresse(void * ptr, int *len, int *erreur)
{
    unsigned long add;

    add = (unsigned long)ptr;
    *len += write(1, "0", 1);
    if(*erreur == -1)
        return ;
    *len += write(1, "x", 1);
    if(*erreur == -1)
        return ;
    ft_puthex(add, len, erreur);
}