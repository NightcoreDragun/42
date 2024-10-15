/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:33:15 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:35:05 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_atoi - Convertit une chaîne de caractères en entier
 * @str: La chaîne de caractères à convertir
 *
 * Cette fonction convertit la chaîne de caractères `str` en un entier de type
 * `int`. Elle ignore les espaces blancs initiaux (comme ' ', '\t', '\n', etc.),
 * gère un signe facultatif ('+' ou '-') et convertit les chiffres suivants
 * en entier jusqu'à rencontrer un caractère non numérique.
 *
 * Retourne la valeur entière convertie de la chaîne ou 0 si la chaîne ne
 * contient pas de nombres valides.
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
