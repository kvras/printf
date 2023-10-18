#include "ft_printf.h"

void	check_format(char *format, va_list list)
{
	if(*(format + 1) == 'c')
		ft_putchar(va_arg(list,int));
	else if(*(format + 1) == 'd')
		ft_putnbr(va_arg(list,int));
	else if(*(format + 1) == 's')
		ft_putstr(va_arg(list,char *));
	else if(*(format + 1) == 'X' || *(format + 1) == 'x')
		ft_puthex(va_arg(list,int),*(format + 1));
	else if(*(format + 1) == 'u')
		ft_putunsigned(va_arg(list,unsigned int));
	else
		ft_putchar('%');
}
void	ft_printf(char *format,...)
{
	int i = 0;
	va_list list;
	va_start(list,format);
	while(format[i])
	{
		if(format[i] == '%')
		{
			check_format(&format[i],list);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(list);
}
int main()
{
	ft_printf("%u",-439);
	return 0;
}
