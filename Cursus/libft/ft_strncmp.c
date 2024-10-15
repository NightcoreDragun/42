/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:57:04 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:57:49 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_strncmp - Compare deux chaînes de caractères 
 * jusqu'à un nombre de caractères donné
 * @s1: La première chaîne à comparer
 * @s2: La seconde chaîne à comparer
 * @n: Le nombre maximal de caractères à comparer
 *
 * Cette fonction compare les deux 
 * chaînes `s1` et `s2` jusqu'à `n` caractères.
 * Elle renvoie un entier positif 
 * si `s1` est plus grand que `s2`, un entier
 * négatif si `s1` est plus petit 
 * que `s2`, et 0 si elles sont identiques jusqu'à `n` caractères.
 * Si une des chaînes se termine avant 
 * que `n` caractères ne soient comparés,
 * la comparaison s'arrête.
 *
 * Retourne un entier en fonction de la comparaison :
 * - < 0 : `s1` est inférieure à `s2`
 * - 0 : `s1` est égale à `s2`
 * - > 0 : `s1` est supérieure à `s2`
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
