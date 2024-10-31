/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:55:43 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:56:53 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_strmapi - Applique une fonction à chaque caractère d'une chaîne
 * @s: La chaîne de caractères sur laquelle itérer
 * @f: La fonction à appliquer à chaque caractère
 *
 * Cette fonction alloue (avec malloc) et retourne une nouvelle chaîne de
 * caractères, qui est le résultat de l'application de la fonction `f` à chaque
 * caractère de la chaîne `s`. La fonction `f` prend en argument l'index du
 * caractère et le caractère lui-même.
 *
 * Retourne la nouvelle chaîne, ou NULL si l'allocation échoue.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
