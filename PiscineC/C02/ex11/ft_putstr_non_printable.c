/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_prntable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:39:14 by apalalau          #+#    #+#             */
/*   Updated: 2024/08/26 12:39:17 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(*str / 16) % 16]);
			ft_putchar("0123456789abcdef"[*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}


