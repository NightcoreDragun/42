/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:35:18 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:43:42 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_get_int_len - Calcule le nombre de chiffres d'un entier
 * @n: L'entier à analyser
 *
 * Cette fonction calcule le nombre de chiffres nécessaires pour représenter
 * l'entier, en tenant compte du signe pour les nombres négatifs.
 *
* Cas particuliers :
 * - n = 0  -> retourne 1 (un seul chiffre : '0')
 * - n = 0000  -> retourne 1 (les zéros supplémentaires ne sont pas comptés)
 *
 * Exemples pour des entiers positifs :
 * - n = 123  -> retourne 3
 * - n = 456789  -> retourne 6
 * - n = 987654321  -> retourne 9
 *
 * Exemples pour des entiers négatifs :
 * - n = -456  -> retourne 4 (3 chiffres + 1 signe)
 * - n = -7890  -> retourne 5 (4 chiffres + 1 signe)
 * - n = -123456  -> retourne 7 (6 chiffres + 1 signe)
 */
static size_t	ft_get_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * ft_fill_str - Remplit la chaîne de caractères avec les chiffres de l'entier
 * @str: La chaîne à remplir
 * @num: La valeur absolue de l'entier
 * @len: La longueur de la chaîne
 */
static void	ft_fill_str(char *str, unsigned int num, size_t len)
{
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
}

/**
 * ft_itoa - Convertit un entier en une chaîne de caractères
 * @n: L'entier à convertir
 *
 * Cette fonction alloue (avec malloc) et retourne une chaîne de caractères
 * représentant l'entier `n` reçu en argument. Les nombres négatifs sont
 * gérés correctement.
 *
 * Retourne une chaîne représentant l'entier ou 
 * NULL en cas d'échec de l'allocation.
 */
char	*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	num;

	len = ft_get_int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
	}
	else
		num = n;
	ft_fill_str(str, num, len);
	return (str);
}
