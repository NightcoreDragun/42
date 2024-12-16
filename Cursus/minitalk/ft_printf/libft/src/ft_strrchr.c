/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:59:55 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 14:02:54 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_strrchr - Cherche la dernière occurrence d'un caractère dans une chaîne
 * @s: La chaîne de caractères à examiner
 * @c: Le caractère à rechercher
 *
 * Cette fonction parcourt la chaîne `s` à la recherche 
 * de la dernière occurrence
 * du caractère `c`. Le caractère de fin de chaîne 
 * `\0` est également considéré.
 * Si le caractère `c` est trouvé, un pointeur vers cette dernière occurrence
 * dans `s` est retourné. Si le caractère `c` n'est pas trouvé, 
 * la fonction renvoie NULL.
 *
 * Retourne un pointeur vers la dernière occurrence 
 * de `c` ou NULL s'il n'est pas trouvé.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char		*last_occurrence;
	unsigned char	uc;

	last_occurrence = NULL;
	uc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			last_occurrence = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
