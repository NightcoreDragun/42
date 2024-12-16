/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:38:45 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:39:00 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_isalpha - Vérifie si un caractère est une lettre de l'alphabet
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est une lettre majuscule (A-Z)
 * ou minuscule (a-z), et 0 sinon.
 *
 * Retourne 1 si c'est une lettre, 0 sinon.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
