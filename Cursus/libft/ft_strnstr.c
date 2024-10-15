/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:59:20 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:59:48 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_strnstr - Trouve la première occurrence d'une sous-chaîne dans une chaîne
 * @haystack: La chaîne dans laquelle chercher
 * @needle: La sous-chaîne à rechercher
 * @len: Le nombre maximal de caractères à parcourir dans la chaîne `haystack`
 *
 * Cette fonction cherche la première occurrence de la sous-chaîne `needle` dans
 * `haystack`, mais seulement dans les `len` premiers caractères de `haystack`.
 * Les caractères après `len` ne sont pas pris en compte.
 * Si `needle` est une chaîne vide, `haystack` est retournée.
 *
 * Retourne un pointeur vers le début de la sous-chaîne trouvée, ou NULL si
 * `needle` n'est pas trouvée dans `len` caractères.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && (i + needle_len) <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
