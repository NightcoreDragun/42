/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:03:04 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 14:05:18 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_strtrim - Supprime les caractères 
 * spécifiés au début et à la fin d'une chaîne
 * @s1: La chaîne à trimmer
 * @set: Le set de caractères à supprimer
 *
 * Cette fonction alloue (avec malloc) et 
 * retourne une copie de la chaîne `s1`,
 * sans les caractères spécifiés dans `set` au début et à la fin.
 * Les caractères * de `set` sont considérés comme à ignorer 
 * s'ils apparaissent en séquence au
 * début ou à la fin de la chaîne `s1`.
 * Retourne une copie trimmée de `s1` ou
 * NULL en cas d'échec de l'allocation.
 */
static size_t	find_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static size_t	find_end(const char *s1, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	end = find_end(s1, set, start);
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
	return (trimmed_str);
}
