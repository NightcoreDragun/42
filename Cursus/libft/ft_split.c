/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:08:15 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:14:43 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_count_words - Compte le nombre de mots dans
 * la chaîne séparée par le délimiteur
 * @s: La chaîne à analyser
 * @c: Le caractère délimiteur
 */
static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/**
 * ft_allocate_word - Alloue de la mémoire pour un mot et le copie
 * @s: La chaîne contenant le mot
 * @c: Le caractère délimiteur
 */
static char	*ft_allocate_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

/**
 * free_allocated_memory - Libère la mémoire allouée en cas d'erreur
 * @result: Le tableau de chaînes allouées
 * @i: L'index courant dans le tableau
 */
static void	free_allocated_memory(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

/**
 * ft_split - Sépare une chaîne en un tableau de chaînes en fonction
 * d'un délimiteur
 * @s: La chaîne à diviser
 * @c: Le caractère délimiteur
 */
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = ft_allocate_word(s, c);
			if (!result[i])
				return (free_allocated_memory(result, i), NULL);
			s += ft_strlen(result[i++]);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
