/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:46:07 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:47:20 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_strdup - Duplique une chaîne de caractères
 * @s1: La chaîne de caractères à dupliquer
 *
 * Cette fonction alloue de la mémoire et crée une copie de la chaîne `s1`.
 * Elle alloue exactement la mémoire nécessaire pour contenir la copie
 * (y compris le caractère nul `\0`). Si l'allocation échoue, la fonction
 * retourne NULL.
 *
 * Retourne un pointeur vers la chaîne dupliquée ou NULL en cas d'échec.
 */
char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len);
	return (dup);
}
