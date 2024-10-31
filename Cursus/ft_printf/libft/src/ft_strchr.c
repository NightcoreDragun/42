/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:14:50 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:19:42 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_strchr - Recherche la première occurrence d'un caractère dans une chaîne
 * @s: La chaîne à rechercher
 * @c: Le caractère à trouver
 *
 * Cette fonction recherche dans la chaîne `s` la première occurrence du
 * caractère `c`. Le caractère nul `\0` est également pris en compte. Si le
 * caractère `c` est trouvé, un pointeur vers cette position dans `s` est
 * renvoyé. Si le caractère `c` n'est pas trouvé, la fonction renvoie NULL.
 *
 * Renvoie un pointeur vers la première occurrence de `c` ou NULL si non trouvé.
 */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}
