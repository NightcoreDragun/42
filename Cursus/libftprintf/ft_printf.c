#include "ft_printf.h"

void print_char(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	write(1, str, ft_strlen(str));
}

void print_decimal(va_list args)
{
	int n = va_arg(args, int);
	char *str = ft_itoa(n);
	write(1, str, ft_strlen(str));
	free(str);
}

void print_unsigned_decimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str = ft_itoa(n);
	write(1, str, ft_strlen(str));
	free(str);
}

void print_percent(void)
{
	write(1, "%", 1);
}


int ft_printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				print_char(args);
			else if (format[i] == 's')
				print_string(args);
			else if (format[i] == 'p')
				print_pointer(args);
			else if (format[i] == 'd' || format[i] == 'i')
				print_decimal(args);
			else if (format[i] == 'u')
				print_unsigned_decimal(args);
			else if (format[i] == 'x')
				print_hex_lowercase(args);
			else if (format[i] == 'X')
				print_hex_uppercase(args);
			else if (format[i] == '%')
				print_percent();
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

int main (void)
{
	ft_printf("Hello %s, %d, %c, %p, %u, %x, %X, %%, %d\n", "world", 42, 'a', (void *)0x12345678, 42, 42, 42, 42);
	return (0);
}

