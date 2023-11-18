#include "libftprintf.h"

void    ft_puthexx(unsigned int nbr, char format, int *len, int *erreur)
{
    ft_puthex((unsigned long long)nbr, format, len, erreur);
}