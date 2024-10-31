/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:13:51 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/31 12:27:53 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft.h"

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
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_putnbr_base((unsigned long)ptr, 16, "0123456789abcdef");
	return (count);
}

static int	ft_handle_number(char format, va_list args)
{
	char	*str;
	int		len;

	str = NULL;
	len = 0;
	if (format == 'd' || format == 'i')
	{
		str = ft_itoa(va_arg(args, int));
		if (!str)
			return (0);
		ft_putstr_fd(str, 1);
		len = (int)ft_strlen(str);
		free(str);
		return (len);
	}
	if (format == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), 10,
				"0123456789"));
	if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), 16,
				"0123456789abcdef"));
	if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), 16,
				"0123456789ABCDEF"));
	return (0);
}

static int	ft_handle_conversion(char format, va_list args)
{
	char	*str;

	if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	if (format == 's')
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		ft_putstr_fd(str, 1);
		return ((int)ft_strlen(str));
	}
	if (format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (ft_handle_number(format, args));
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
