/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:42:49 by apalalau          #+#    #+#             */
/*   Updated: 2024/09/03 15:43:35 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	handle_negative(int *nbr, char *base, int base_len)
{
	if (*nbr < 0)
	{
		write(1, "-", 1);
		if (*nbr == -2147483648)
		{
			write(1, &base[(-(*nbr / base_len)) % base_len], 1);
			*nbr = -(*nbr % base_len);
			return ;
		}
		*nbr = -*nbr;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	int		num[100];

	if (check_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	handle_negative(&nbr, base, base_len);
	i = 0;
	while (nbr)
	{
		num[i] = nbr % base_len;
		nbr /= base_len;
		i++;
	}
	while (--i >= 0)
		write(1, &base[num[i]], 1);
}
