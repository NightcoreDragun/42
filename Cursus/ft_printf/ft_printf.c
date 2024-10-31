/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nightcoredragun <nightcoredragun@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:58:24 by nightcoredr       #+#    #+#             */
/*   Updated: 2024/10/31 11:07:05 by nightcoredr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

static int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		s = "(null)";
	len = 0;
	while (*s)
		len += ft_putchar(*s++);
	return (len);
}

static int	ft_putnbr_base(long num, int base, char *digits)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	if (num >= base)
		count += ft_putnbr_base(num / base, base, digits);
	count += ft_putchar(digits[num % base]);
	return (count);
}

static int	ft_handle_conversion(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_putstr("0x")
			+ ft_putnbr_base((unsigned long)va_arg(args, void *), 16,
				"0123456789abcdef"));
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
		return (ft_putchar('%'));
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
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
