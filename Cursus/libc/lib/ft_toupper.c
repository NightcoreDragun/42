/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:07:48 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 14:08:48 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_toupper - Convertit une lettre minuscule en majuscule
 * @c: Le caractère à convertir
 *
 * Cette fonction prend un caractère en entrée. Si ce caractère est une
 * lettre minuscule (comprise entre 'a' et 'z'), elle le convertit en lettre
 * majuscule (comprise entre 'A' et 'Z'). Si le caractère n'est pas une lettre
 * minuscule, il est retourné tel quel.
 *
 * Retourne le caractère converti en majuscule, ou le caractère inchangé
 * s'il n'est pas une minuscule.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
