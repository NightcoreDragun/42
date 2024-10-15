/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:45:47 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:54:37 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_memcmp - Compare deux zones mémoire sur un nombre donné d'octets
 * @s1: La première zone mémoire
 * @s2: La seconde zone mémoire
 * @n: Le nombre d'octets à comparer
 *
 * Cette fonction compare les `n` premiers octets des zones mémoire `s1` et `s2`.
 * Elle renvoie un entier positif si `s1` est supérieur à `s2`, un entier négatif
 * si `s1` est inférieur à `s2`, et 0 si les deux zones sont égales.
 *
 * Retourne un entier indiquant la différence entre les deux zones mémoire :
 * - < 0 : `s1` est inférieure à `s2`
 * - 0 : `s1` est égale à `s2`
 * - > 0 : `s1` est supérieure à `s2`
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
