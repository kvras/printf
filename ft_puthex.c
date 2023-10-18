#include "ft_printf.h"

void	ft_puthex(int nbr, char format)
{
	char *hex;
	if(format == 'X')
		hex ="0123456789ABCDEF";
	else
		hex ="0123456789abcdef";
	if(nbr / 16 > 0)
		ft_puthex(nbr / 16,format);
	write(1,&hex[nbr%16],1);
}
