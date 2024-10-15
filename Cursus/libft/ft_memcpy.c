/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:55:40 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:58:00 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_memcpy - Copie une zone mémoire d'une source vers une destination
 * @dst: Pointeur vers la zone de destination
 * @src: Pointeur vers la zone source
 * @n: Nombre d'octets à copier
 *
 * Cette fonction copie `n` octets de la zone mémoire pointée par `src`
 * vers celle pointée par `dst`. Si `dst` et `src` sont NULL, la fonction
 * renvoie NULL. La fonction ne gère pas les chevauchements de mémoire,
 * donc si les zones se chevauchent, il est recommandé d'utiliser `ft_memmove`.
 *
 * Retourne un pointeur vers `dst`.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
