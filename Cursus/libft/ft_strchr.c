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

#include "./libft.h"

/**
 * ft_strchr - Searches for the first occurrence of a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * This function searches the string `s` for the first occurrence of the
 * character `c`. The null character `\0` is also considered. If the character
 * `c` is found, a pointer to that position in `s` is returned. If the character
 * `c` is not found, the function returns NULL.
 *
 * Returns a pointer to the first occurrence of `c` or NULL if not found.
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
