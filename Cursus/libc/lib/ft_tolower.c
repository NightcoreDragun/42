/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:06:57 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 14:07:37 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_tolower - Convertit une lettre majuscule en minuscule
 * @c: Le caractère à convertir
 *
 * Cette fonction prend un caractère en entrée. Si ce caractère est une
 * lettre majuscule (comprise entre 'A' et 'Z'), elle le convertit en lettre
 * minuscule (comprise entre 'a' et 'z'). Si le caractère n'est pas une lettre
 * majuscule, il est retourné tel quel.
 *
 * Retourne le caractère converti en minuscule, ou le caractère inchangé
 * s'il n'est pas une majuscule.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
