/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:33:46 by apalalau          #+#    #+#             */
/*   Updated: 2024/08/21 13:33:52 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recu0rsive(int n, int pos, int start, char *result)
{
	if (pos == n)
	{
		write(1, result, n);
		// Si la première position de la combinaison actuelle n'est pas égale au premier chiffre
		// de la dernière combinaison possible (par exemple, '4' pour n=6),
		// ajouter une virgule et un espace après la combinaison affichée.
		// Cela permet de séparer les combinaisons par ", " sans en ajouter après la dernière combinaison.
		if (result[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	while (start <= 9)
	{
		result[pos] = start + '0';
		ft_print_combn_recursive(n, pos + 1, start + 1, result);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	result[10];

	if (n > 0 && n < 10)
		ft_print_combn_recursive(n, 0, 0, result);
}
