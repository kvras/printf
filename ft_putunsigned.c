#include "ft_printf.h"

void	ft_putunsigned(unsigned int nbr)
{
	if(nbr > 9)
	{
		ft_putunsigned(nbr / 10);
		ft_putunsigned(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}
