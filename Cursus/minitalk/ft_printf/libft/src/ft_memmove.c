/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:58:22 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:58:38 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_memmove - Copie une zone mémoire en gérant les chevauchements
 * @dst: Pointeur vers la zone de destination
 * @src: Pointeur vers la zone source
 * @len: Nombre d'octets à copier
 *
 * Cette fonction copie `len` octets de la zone mémoire pointée par `src`
 * vers celle pointée par `dst`. Elle gère les cas où les zones mémoire
 * se chevauchent, en adaptant la direction de la copie pour éviter
 * d'écraser les données. Si `dst` et `src` sont NULL, la fonction renvoie NULL.
 *
 * Retourne un pointeur vers `dst`.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}
