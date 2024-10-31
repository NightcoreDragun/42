/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nightcoredragun <nightcoredragun@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:58:24 by nightcoredr       #+#    #+#             */
/*   Updated: 2024/10/31 10:27:44 by nightcoredr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		s = "(null)";
	len = 0;
	while (*s)
	{
		ft_putchar_fd(*s++, 1);
		len++;
	}
	return (len);
}

static int	ft_putnbr_base(unsigned long num, int base, char *digits)
{
	int	count;

	count = 0;
	if (num >= (unsigned long)base)
		count += ft_putnbr_base(num / base, base, digits);
	ft_putchar_fd(digits[num % base], 1);
	count++;
	return (count);
}

static int	ft_print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	count += ft_putnbr_base((unsigned long)ptr, 16, "0123456789abcdef");
	return (count);
}

static int	ft_handle_conversion(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1), 1);
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr_base(va_arg(args, int), 10, "0123456789"));
	if (format == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789"));
	if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), 16,
			"0123456789abcdef"));
	if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), 16,
			"0123456789ABCDEF"));
	if (format == '%')
		return (ft_putchar_fd('%', 1), 1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count += ft_handle_conversion(format[++i], args);
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
