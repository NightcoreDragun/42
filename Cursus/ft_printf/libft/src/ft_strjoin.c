/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:18 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:51:20 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_strjoin - Concatène deux chaînes de caractères
 * @s1: La première chaîne (préfixe)
 * @s2: La deuxième chaîne (suffixe)
 *
 * Cette fonction alloue (avec malloc) et retourne une nouvelle chaîne
 * de caractères qui est le résultat de la concaténation de `s1` + `s2`.
 *
 * Retourne un pointeur vers la nouvelle chaîne ou NULL en cas d'échec.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	new_str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, s1_len + 1);
	ft_strlcat(new_str, s2, total_len + 1);
	return (new_str);
}
