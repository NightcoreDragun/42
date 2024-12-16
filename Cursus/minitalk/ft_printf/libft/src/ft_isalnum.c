/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:35:18 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:38:32 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_isalnum - Vérifie si un caractère est alphanumérique
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est une lettre (majuscule ou 
 * minuscule) ou un chiffre (0-9), et 0 sinon.
 *
 * Retourne 1 si le caractère est alphanumérique, 0 sinon.
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
